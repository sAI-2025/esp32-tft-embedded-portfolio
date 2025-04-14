# 📱 Esp32-tft-embedded-portfolio

> Showcasing my **Embedded Systems + UI Development** skills on a **3.5" TFT LCD (ILI9488)** using an **ESP32-S2** microcontroller.  
> Designed to work as a **standalone hardware-based portfolio** — no computer required!

---

![ESP32 Board](esp32.jpg)

## 🚀 Project Highlights

✅ Interactive portfolio UI on 3.5" TFT LCD  
✅ Built with ESP32-S2 microcontroller  
✅ Clean & modern embedded user interface  
✅ Custom-configured **TFT_eSPI** library  
✅ Demonstrates **8-bit parallel & SPI communication**  
✅ SD card media loading support  
✅ Fully standalone — portable & offline

---

## 🛠️ Hardware Components

- ✅ **ESP32-S2** Dev Board  
- ✅ **3.5" TFT LCD** Display (ILI9488 Driver)  
- ✅ **On-board SD Card Module** (SPI interface)  
- ✅ Breadboard + jumper wires  
- ✅ Custom wiring and setup

---

## 📸 Visual Overview

### 🖼️ TFT Display Output  
![TFT Display UI](tft.jpeg)

### 🧠 ESP32 Board Setup  
![ESP32 Board](esp32.jpg)

### 🔌 Circuit Connections  
![Circuit Diagram](Circuit Diagram.jpg)

### 🎥 Demo Output  
[▶️ Watch Demo Video](Output.mp4)

---

## 🧩 Wiring Connections

### ✅ TFT Display – 8-bit Parallel Mode

| **TFT Pin** | **ESP32-S2 Pin** | **Function**        |
|------------|------------------|---------------------|
| LCD_RD     | GPIO 2           | Read Strobe         |
| LCD_WR     | GPIO 4           | Write Strobe        |
| LCD_RS     | GPIO 15          | Data/Command        |
| LCD_CS     | GPIO 33          | Chip Select         |
| LCD_RST    | GPIO 32          | Reset               |
| LCD_D0     | GPIO 12          | Data Bit 0          |
| LCD_D1     | GPIO 13          | Data Bit 1          |
| LCD_D2     | GPIO 26          | Data Bit 2          |
| LCD_D3     | GPIO 25          | Data Bit 3          |
| LCD_D4     | GPIO 17          | Data Bit 4          |
| LCD_D5     | GPIO 16          | Data Bit 5          |
| LCD_D6     | GPIO 27          | Data Bit 6          |
| LCD_D7     | GPIO 14          | Data Bit 7          |

---

### ✅ SD Card Module – SPI Mode

| **SD Pin**   | **ESP32-S2 Pin** | **Function**              |
|--------------|------------------|---------------------------|
| SD_CS        | GPIO 5           | Chip Select               |
| SD_DI (MOSI) | GPIO 23          | Master Out Slave In       |
| SD_DO (MISO) | GPIO 19          | Master In Slave Out       |
| SD_SCK       | GPIO 18          | Clock                     |

---

## 📁 Project Structure

