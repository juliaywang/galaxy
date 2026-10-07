#include <TFT_eSPI.h>
#include <SPI.h>

TFT_eSPI tft = TFT_eSPI();

int size1 = 2, size2 = 5, size3 = 8;
int speed1 = 1, speed2 = 0.8, speed3 = 1;

// colors for the galaxy 
uint16_t colors[] = {TFT_PINK, TFT_BLUE, TFT_PURPLE};

void setup() {
  tft.init();
  tft.setRotation(1);
  tft.fillScreen(TFT_BLACK);

  // random pink, blue, and purple background stars
  for (int i = 0; i < 100; i++) {
    int x = random(tft.width());
    int y = random(tft.height());
    int c = random(0, 3);

    tft.fillCircle(x, y, 1, colors[c]);
  }
}

void loop() {
  // erase old white stars
  tft.fillCircle(60, 50, 11, TFT_BLACK);
  tft.fillCircle(160, 100, 11, TFT_BLACK);
  tft.fillCircle(250, 60, 11, TFT_BLACK);

  // speed for white stars to grow/shrink
  size1 += speed1;
  size2 += speed2;
  size3 += speed3;

  if (size1 >= 10 || size1 <= 2) speed1 = -speed1;
  if (size2 >= 10 || size2 <= 2) speed2 = -speed2;
  if (size3 >= 10 || size3 <= 2) speed3 = -speed3;

  // create white pulsing stars
  tft.fillCircle(60, 50, size1, TFT_WHITE);
  tft.fillCircle(160, 100, size2, TFT_WHITE);
  tft.fillCircle(250, 60, size3, TFT_WHITE);

  delay(random(50, 150));
}