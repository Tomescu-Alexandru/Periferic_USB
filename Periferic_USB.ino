#include "UsbKeyboard.h"

#define BUTTON_PIN 12

// If the timer isr is corrected
// to not take so long change this to 0.
#define BYPASS_TIMER_ISR 1

void setup() {
  pinMode(BUTTON_PIN, INPUT);
  digitalWrite(BUTTON_PIN, HIGH);
  
#if BYPASS_TIMER_ISR
  // disable timer 0 overflow interrupt (used for millis)
  TIMSK0&=!(1<<TOIE0); // ++
#endif
}

#if BYPASS_TIMER_ISR
void delayMs(unsigned int ms) {
   /*
  */ 
  for (int i = 0; i < ms; i++) {
    delayMicroseconds(1000);
  }
}
#endif

void loop() {
  
  UsbKeyboard.update();

  

  if (digitalRead(BUTTON_PIN) == 0) {
    digitalWrite(13, HIGH);  
    
    UsbKeyboard.sendKeyStroke(KEY_T);
    UsbKeyboard.sendKeyStroke(KEY_O);
    UsbKeyboard.sendKeyStroke(KEY_M);
    UsbKeyboard.sendKeyStroke(KEY_E);
    UsbKeyboard.sendKeyStroke(KEY_S);
    UsbKeyboard.sendKeyStroke(KEY_C);
    UsbKeyboard.sendKeyStroke(KEY_U);

    UsbKeyboard.sendKeyStroke(KEY_SPACE);
    
    UsbKeyboard.sendKeyStroke(KEY_I);
    UsbKeyboard.sendKeyStroke(KEY_L);
    UsbKeyboard.sendKeyStroke(KEY_I);
    UsbKeyboard.sendKeyStroke(KEY_E);

    UsbKeyboard.sendKeyStroke(KEY_SPACE);
     
    UsbKeyboard.sendKeyStroke(KEY_A);
    UsbKeyboard.sendKeyStroke(KEY_L);
    UsbKeyboard.sendKeyStroke(KEY_E);
    UsbKeyboard.sendKeyStroke(KEY_X);
    UsbKeyboard.sendKeyStroke(KEY_A);
    UsbKeyboard.sendKeyStroke(KEY_N);
    UsbKeyboard.sendKeyStroke(KEY_D);
    UsbKeyboard.sendKeyStroke(KEY_R);
    UsbKeyboard.sendKeyStroke(KEY_U);

   UsbKeyboard.sendKeyStroke(KEY_ENTER);

   UsbKeyboard.sendKeyStroke(KEY_F);
   UsbKeyboard.sendKeyStroke(KEY_A);
   UsbKeyboard.sendKeyStroke(KEY_C);
   UsbKeyboard.sendKeyStroke(KEY_U);
   UsbKeyboard.sendKeyStroke(KEY_L);
   UsbKeyboard.sendKeyStroke(KEY_T);
   UsbKeyboard.sendKeyStroke(KEY_A);
   UsbKeyboard.sendKeyStroke(KEY_T);
   UsbKeyboard.sendKeyStroke(KEY_E);
   UsbKeyboard.sendKeyStroke(KEY_A);

   UsbKeyboard.sendKeyStroke(KEY_SPACE);

   UsbKeyboard.sendKeyStroke(KEY_D);
   UsbKeyboard.sendKeyStroke(KEY_E);

   UsbKeyboard.sendKeyStroke(KEY_SPACE);
   UsbKeyboard.sendKeyStroke(KEY_A);
   UsbKeyboard.sendKeyStroke(KEY_U);
   UsbKeyboard.sendKeyStroke(KEY_T);
   UsbKeyboard.sendKeyStroke(KEY_O);
   UsbKeyboard.sendKeyStroke(KEY_M);
   UsbKeyboard.sendKeyStroke(KEY_A);
   UsbKeyboard.sendKeyStroke(KEY_T);
   UsbKeyboard.sendKeyStroke(KEY_I);
   UsbKeyboard.sendKeyStroke(KEY_C);
   UsbKeyboard.sendKeyStroke(KEY_A);

   UsbKeyboard.sendKeyStroke(KEY_SPACE);
   
   UsbKeyboard.sendKeyStroke(KEY_S);
   UsbKeyboard.sendKeyStroke(KEY_I);

   UsbKeyboard.sendKeyStroke(KEY_SPACE);

   UsbKeyboard.sendKeyStroke(KEY_C);
   UsbKeyboard.sendKeyStroke(KEY_A);
   UsbKeyboard.sendKeyStroke(KEY_L);
   UsbKeyboard.sendKeyStroke(KEY_C);
   UsbKeyboard.sendKeyStroke(KEY_U);
   UsbKeyboard.sendKeyStroke(KEY_L);
   UsbKeyboard.sendKeyStroke(KEY_A);
   UsbKeyboard.sendKeyStroke(KEY_T);
   UsbKeyboard.sendKeyStroke(KEY_O);
   UsbKeyboard.sendKeyStroke(KEY_A);
   UsbKeyboard.sendKeyStroke(KEY_R);
   UsbKeyboard.sendKeyStroke(KEY_E);

    UsbKeyboard.sendKeyStroke(KEY_ENTER);
    digitalWrite(13, LOW);
#if BYPASS_TIMER_ISR  // check if timer isr fixed.
    delayMs(20);
#else
    delay(20);
#endif
    
   }

}
