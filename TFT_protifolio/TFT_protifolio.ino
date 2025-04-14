#include <TFT_eSPI.h>
#include <SPI.h>

TFT_eSPI tft = TFT_eSPI();

#define BG_COLOR        TFT_BLACK
#define HEADER_COLOR    TFT_YELLOW
#define SKILL_COLOR     TFT_GREEN
#define FOOTER_COLOR    TFT_ORANGE
#define BIO_COLOR       TFT_WHITE
#define TEXT_COLOR      TFT_WHITE
#define PROJECT_COLOR   TFT_CYAN
#define ACHIEVEMENT_COLOR TFT_MAGENTA
#define RESEARCH_COLOR  TFT_BLUE

struct PortfolioEntry {
  String text;
  uint8_t fontSize;
  uint16_t color;
  uint8_t fontNumber;
};

PortfolioEntry portfolio[] = {
  {"Sai Krishna Chowdary Chundru", 4, HEADER_COLOR, 4},
  {"AI/ML Engineer | Data Scientist", 3, SKILL_COLOR, 2},
  {"About Me", 3, FOOTER_COLOR, 4},
  {"Passionate about AI, ML & Deep Learning.", 2, BIO_COLOR, 2},
  {"Strong in Computer Vision, NLP & LLMs.", 2, BIO_COLOR, 2},
  {"Email: cchsaikrishnachowdary@gmail.com", 2, TEXT_COLOR, 2},
  {"LinkedIn: linkedin.com/in/sai-krishna-chowdary-chundru", 2, TEXT_COLOR, 2},
  {"GitHub: github.com/sAI-2025", 2, TEXT_COLOR, 2},
  {"Skills", 3, FOOTER_COLOR, 4},
  {"Python, C, SQL, ML, DL, CV, NLP, LLMs", 2, SKILL_COLOR, 2},
  {"TensorFlow, PyTorch, OpenCV, HuggingFace", 2, SKILL_COLOR, 2},
  {"AWS, Docker, Flask, Git, Google Colab", 2, SKILL_COLOR, 2},
  {"Projects", 3, FOOTER_COLOR, 4},
  {"Pneumonia Detection - AI X-ray analysis (91%)", 2, PROJECT_COLOR, 2},
  {"BioBERT: NLP for medical text extraction", 2, PROJECT_COLOR, 2},
  {"Pothole Detection: YOLOv5-based CV", 2, PROJECT_COLOR, 2},
  {"OCT Retinal Disease Classification (98.4%)", 2, PROJECT_COLOR, 2},
  {"Liver Segmentation (U-Net, 97.6% IOU)", 2, PROJECT_COLOR, 2},
  {"Achievements", 3, FOOTER_COLOR, 4},
  {"IIT Madras Road Safety Hackathon Winner", 2, ACHIEVEMENT_COLOR, 2},
  {"New India Vibrant Hackathon Runner-up", 2, ACHIEVEMENT_COLOR, 2},
  {"Research Interests", 3, FOOTER_COLOR, 4},
  {"AI in Medical Imaging & Healthcare", 2, RESEARCH_COLOR, 2},
  {"AI-driven Autonomous Drones for Delivery", 2, RESEARCH_COLOR, 2},
  {"LLMs in Biomedical Science", 2, RESEARCH_COLOR, 2},
  {"Smart Vending Machines & IoT AI", 2, RESEARCH_COLOR, 2},
};

int numEntries = sizeof(portfolio) / sizeof(portfolio[0]);
int scrollIndex = 0;
int scrollOffset = 0;

void setup() {
  Serial.begin(921600);
  tft.init();
  tft.setRotation(1);
  tft.fillScreen(BG_COLOR);
}

void loop() {
  tft.fillScreen(BG_COLOR);
  
  int y = 30 - scrollOffset;
  for (int i = scrollIndex; i < numEntries; i++) {
    tft.setTextColor(portfolio[i].color, BG_COLOR);
    tft.setTextFont(portfolio[i].fontNumber);
    tft.setCursor(20, y);
    tft.print(portfolio[i].text);
    
    y += tft.fontHeight(portfolio[i].fontNumber) + 10;
    
    if (y > tft.height()) break;
  }

  scrollOffset += 2;
  if (scrollOffset >= tft.fontHeight(portfolio[scrollIndex].fontNumber) + 10) {
    scrollOffset = 0;
    scrollIndex++;
    if (scrollIndex >= numEntries) scrollIndex = 0;
  }

  delay(60000000);
}