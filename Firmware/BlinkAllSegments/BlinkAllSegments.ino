/*Modified FastLED Blink.ino Example
 * 
 * Description: This modified example is used to control all segments
 * of the LED Neon Flex Rope.
 */
#include "FastLED.h"

// How many leds in your strip?
#define NUM_LEDS 16 //# of segments on the LED Neon Flex Rope

// For led chips like Neopixels, which have a data line, ground, and power, you just
// need to define DATA_PIN.  For led chipsets that are SPI based (four wires - data, clock,
// ground, and power), like the LPD8806 define both DATA_PIN and CLOCK_PIN
#define DATA_PIN 5
//#define CLOCK_PIN 13 //not used with UCS1903 chipset

// Define the array of leds
CRGB leds[NUM_LEDS];

void setup() { 
      // Uncomment/edit one of the following lines for your leds arrangement.
      // FastLED.addLeds<TM1803, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<TM1804, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<TM1809, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<WS2811, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<WS2812, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<WS2812B, DATA_PIN, RGB>(leds, NUM_LEDS);
  	  //FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
      // FastLED.addLeds<APA104, DATA_PIN, RGB>(leds, NUM_LEDS);
      FastLED.addLeds<UCS1903, DATA_PIN, BRG>(leds, NUM_LEDS);
      // FastLED.addLeds<UCS1903B, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<GW6205, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<GW6205_400, DATA_PIN, RGB>(leds, NUM_LEDS);
      
      // FastLED.addLeds<WS2801, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<SM16716, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<LPD8806, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<P9813, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<APA102, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<DOTSTAR, RGB>(leds, NUM_LEDS);

      // FastLED.addLeds<WS2801, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<SM16716, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<LPD8806, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<P9813, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<APA102, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<DOTSTAR, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
}

void loop() {
  // Turn the LED on, then pause
  leds[0] = CRGB::Red;
  FastLED.show();
  delay(250);
  // Now turn the LED off, then pause
  leds[0] = CRGB::Black;
  FastLED.show();
  delay(250);

  // Turn the LED on, then pause
  leds[1] = CRGB::Red;
  FastLED.show();
  delay(250);
  // Now turn the LED off, then pause
  leds[1] = CRGB::Black;
  FastLED.show();
  delay(250);

  // Turn the LED on, then pause
  leds[2] = CRGB::Red;
  FastLED.show();
  delay(250);
  // Now turn the LED off, then pause
  leds[2] = CRGB::Black;
  FastLED.show();
  delay(250);

  // Turn the LED on, then pause
  leds[3] = CRGB::Red;
  FastLED.show();
  delay(250);
  // Now turn the LED off, then pause
  leds[3] = CRGB::Black;
  FastLED.show();
  delay(250);

  // Turn the LED on, then pause
  leds[4] = CRGB::Red;
  FastLED.show();
  delay(250);
  // Now turn the LED off, then pause
  leds[4] = CRGB::Black;
  FastLED.show();
  delay(250);

  // Turn the LED on, then pause
  leds[5] = CRGB::Red;
  FastLED.show();
  delay(250);
  // Now turn the LED off, then pause
  leds[5] = CRGB::Black;
  FastLED.show();
  delay(250);

  // Turn the LED on, then pause
  leds[6] = CRGB::Red;
  FastLED.show();
  delay(250);
  // Now turn the LED off, then pause
  leds[6] = CRGB::Black;
  FastLED.show();
  delay(250);


  // Turn the LED on, then pause
  leds[7] = CRGB::Red;
  FastLED.show();
  delay(250);
  // Now turn the LED off, then pause
  leds[7] = CRGB::Black;
  FastLED.show();
  delay(250);

  // Turn the LED on, then pause
  leds[8] = CRGB::Red;
  FastLED.show();
  delay(250);
  // Now turn the LED off, then pause
  leds[8] = CRGB::Black;
  FastLED.show();
  delay(250);

  // Turn the LED on, then pause
  leds[9] = CRGB::Red;
  FastLED.show();
  delay(250);
  // Now turn the LED off, then pause
  leds[9] = CRGB::Black;
  FastLED.show();
  delay(250);

  // Turn the LED on, then pause
  leds[10] = CRGB::Red;
  FastLED.show();
  delay(250);
  // Now turn the LED off, then pause
  leds[10] = CRGB::Black;
  FastLED.show();
  delay(250);

  // Turn the LED on, then pause
  leds[11] = CRGB::Red;
  FastLED.show();
  delay(250);
  // Now turn the LED off, then pause
  leds[11] = CRGB::Black;
  FastLED.show();
  delay(250);

  // Turn the LED on, then pause
  leds[12] = CRGB::Red;
  FastLED.show();
  delay(250);
  // Now turn the LED off, then pause
  leds[12] = CRGB::Black;
  FastLED.show();
  delay(250);

  // Turn the LED on, then pause
  leds[13] = CRGB::Red;
  FastLED.show();
  delay(250);
  // Now turn the LED off, then pause
  leds[13] = CRGB::Black;
  FastLED.show();
  delay(250);

  // Turn the LED on, then pause
  leds[14] = CRGB::Red;
  FastLED.show();
  delay(250);
  // Now turn the LED off, then pause
  leds[14] = CRGB::Black;
  FastLED.show();
  delay(250);
  
  // Turn the LED on, then pause
  leds[15] = CRGB::Red;
  FastLED.show();
  delay(250);
  // Now turn the LED off, then pause
  leds[15] = CRGB::Black;
  FastLED.show();
  delay(250);
}
