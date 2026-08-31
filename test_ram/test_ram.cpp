#include "esp_system.h"

void setup() {
  Serial.begin(115200);
  delay(1000);

  Serial.println("\n--- INFORMACION DE MEMORIA ESP32-CAM ---");
  Serial.printf("Memoria Flash total: %d MB\n", ESP.getFlashChipSize() / (1024 * 1024));
  Serial.printf("SRAM interna libre: %d KB\n", ESP.getFreeHeap() / 1024);
  
  if (psramFound()) {
    Serial.printf("PSRAM detectada: Si. Tamaño total: %d MB\n", ESP.getPsramSize() / (1024 * 1024));
  } else {
    Serial.println("PSRAM detectada: No (o deshabilitada en el IDE).");
  }
}

void loop() {
}
