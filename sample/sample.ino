#include "Keyboard.h"

#define Button_pin 2

int brightness = 0;
int fadeAmount = 5;
int delayDuration = 30;

void setup() {

    // put your setup code here, to run once:

    pinMode(Button_pin, INPUT_PULLUP);

    Keyboard.begin();

    pinMode(3, OUTPUT);

}



void loop() {

    // put your main code here, to run repeatedly:

    analogWrite(3, brightness);
    brightness = brightness + fadeAmount;

    if (brightness <= 0 || brightness >= 255) {
        fadeAmount = -fadeAmount;
    }

    delay(delayDuration);

    if (digitalRead(Button_pin) == LOW) {
        Keyboard.press('f');
        Keyboard.release('f');
        Keyboard.press('i');
        Keyboard.release('i');
        Keyboard.press('r');
        Keyboard.release('r');
        Keyboard.press('e');
        Keyboard.release('e');
        Keyboard.press('b');
        Keyboard.release('b');
        Keyboard.press('a');
        Keyboard.release('a');
        Keyboard.press('s');
        Keyboard.release('s');
        Keyboard.press('e');
        Keyboard.release('e');
        Keyboard.press(' ');
        Keyboard.release(' ');
        Keyboard.press('d');
        Keyboard.release('d');
        Keyboard.press('e');
        Keyboard.release('e');
        Keyboard.press('p');
        Keyboard.release('p');
        Keyboard.press('l');
        Keyboard.release('l');
        Keyboard.press('o');
        Keyboard.release('o');
        Keyboard.press('y');
        Keyboard.release('y');
        Keyboard.press(KEY_RETURN);
        Keyboard.release(KEY_RETURN);
        delay(500);
    }

}
