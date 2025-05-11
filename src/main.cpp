#include <Arduino.h>

const int pwmPin = 18;       // GPIO que usarás para PWM (puedes cambiarlo)
const int pwmFreq = 25000;   // 25 kHz
const int pwmChannel = 0;    // Canal de PWM
const int pwmResolution = 8; // Resolución de 8 bits (0–255)

void setup() {
  ledcSetup(pwmChannel, pwmFreq, pwmResolution);
  ledcAttachPin(pwmPin, pwmChannel);

  // Inicializa con 50% de velocidad
  ledcWrite(pwmChannel, 128);
}

void loop() {
  // Ejemplo: barrido de velocidad de 0 a 100%
  // for (int duty = 128; duty <= 255; duty++) {
  //   ledcWrite(pwmChannel, duty);
  //   delay(500);
  // }
  // for (int duty = 255; duty >= 128; duty--) {
  //   ledcWrite(pwmChannel, duty);
  //   delay(500);
  // }
  int duty = 128;
  ledcWrite(pwmChannel, duty);
  delay(500);
}