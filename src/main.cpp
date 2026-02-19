#include <Arduino.h>
#include <Servo.h>
Servo myServo;
void setup()
{
    Serial.begin(9600);
    myServo.attach(10);
    Serial.println("Servo initiate");
}
void loop()
{
    for (int angle =0;angle<=100;angle+=10) {
        myServo.write(angle);
        Serial.print("Angle: ");
        Serial.println(angle);
        delay(500);
    }
    for (int angle =100;angle>=0;angle-=10) {
        myServo.write(angle);
        Serial.print("Angle: ");
        Serial.println(angle);
        delay(500);
    }
}






