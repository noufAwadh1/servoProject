#include <Servo.h>

Servo servoRight; //define the servo in the right 
Servo servoLeft ; // define the servo in the left

int potpin0 =0;
int potpin1=1;
int val , val2;

void setup()
{
servoRight.attach(10); //the servo in the right connect with pin 10
servoLeft.attach(9); // the servo in the left connect with pin 9
  
}

void loop()
{
val = analogRead(potpin0);
  val2=analogRead(potpin1);
val = map(val, 0, 1023, 0, 180);
  val2 = map(val2, 0, 1023, 0, 180);
  
servoRight.write(val);
  servoLeft.write(val2);
  
delay(15);

}