void wifi_connect() {
  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.print(ssid);
  WiFi.mode(WIFI_STA);
  status = WiFi.begin(ssid, pass);

  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(1000);

    display.setTextColor(SSD1306_WHITE);
    display.setCursor(26, 10);
    display.drawRect(0, 0, SCREEN_WIDTH - 1, SCREEN_HEIGHT - 1, SSD1306_WHITE);

    display.println("Connecting...");
    display.display();
  }

  Serial.println();
  Serial.print(ssid);
  Serial.println(" is connected!");
  Serial.println(WiFi.localIP());

  // digitalWrite(led1, HIGH);

  display.setTextColor(SSD1306_WHITE);
  display.setCursor(26, 10);
  display.drawRect(0, 0, SCREEN_WIDTH - 1, SCREEN_HEIGHT - 1, SSD1306_WHITE);
  display.setTextColor(SSD1306_WHITE);

  Serial.println();
  Serial.print(ssid);
  Serial.println(" is connected!");
  Serial.println(WiFi.localIP());

  display.clearDisplay();
  display.setCursor(26, 10);
  display.println("Connected!");
  display.display();

  delay(500);

}