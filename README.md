# PWM Fan Control with ESP32

This project controls the speed of a 12V DC fan using a PWM signal from an ESP32 microcontroller. The fan accepts a [20-30] kHz PWM input and is powered separately with a 12V source.

## 📦 Project Overview

- Board: ESP32
- Language: C++ (PlatformIO / Arduino framework)
- Function: Sends a 25kHz PWM signal to the fan's control pin (blue wire) to set speed
- Output PWM Duty Cycle: Fixed at 50% (can be adjusted)

## 📁 File Structure

| Path               | Purpose                                                                                  |
|--------------------|------------------------------------------------------------------------------------------|
| **src/main.cpp**   | Main application that generates a 25 kHz PWM signal on GPIO18 to control fan speed.     |
| **.gitignore**     | Specifies files and folders that should be ignored by Git (e.g. `.pio`, `*.bin`, etc.). |
| **platformio.ini** | PlatformIO build configuration for the ESP32 target (framework = Arduino).              |

## ⚙️ Wiring Instructions

| FAN Wire | Connect to          |
|----------|---------------------|
| Red      | 12V power supply +  |
| Black    | GND (shared with ESP32) |
| Blue     | GPIO 18 of ESP32 (PWM) |
| White   | (Optional) Tachometer |

> ⚠️ Make sure the ESP32 and the fan's power supply share a common ground.
