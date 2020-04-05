const int LED_ao = 3;

void setup() {
  pinMode(LED_ao, OUTPUT);
}

void loop() {
  for (int brightness = 1; brightness <= 255; brightness++) // can change the brightness value to 55
{
   analogWrite(LED_ao, brightness);
   delay(10); 
  }
 for (int brightness = 255; brightness > 0; brightness--) // can change the brightness value to 55
  {
    analogWrite(LED_ao, brightness);
    delay(10); 
   }
}
