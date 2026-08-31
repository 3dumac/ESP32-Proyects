void setup() {
  Serial.begin(115200);
  delay(2000);  // da tiempo a abrir el monitor serie
  Serial.println("=== Test PSRAM ===");
  Serial.printf("PSRAM encontrada: %s\n", psramFound() ? "SI" : "NO");
  Serial.printf("PSRAM total: %d bytes\n", ESP.getPsramSize());
  Serial.printf("PSRAM libre: %d bytes\n", ESP.getFreePsram());
  Serial.printf("Heap total: %d bytes\n", ESP.getHeapSize());
  Serial.printf("Heap libre: %d bytes\n", ESP.getFreeHeap());
}

void loop() {
  delay(5000);
  Serial.println("...vivo...");
}