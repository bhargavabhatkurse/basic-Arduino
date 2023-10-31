#include <Servo.h>
Servo Myservo;
int pos;
void setup()
{
  Serial.begin(9600);
  Myservo.attach(9);     //this is similar to pinmode. but attach is the library function 
}

void loop()
{

  
  while (Serial.available() == 0) {
  }
  int choice = Serial.parseInt();

  if (choice == 1) {
    for (int pos = 0; pos <= 180; pos++) {
      Myservo.write(pos);    //rotating the motor
      delay(15);
    }
  }

  if (choice == 2) {

    for (pos = 180; pos >= 0; pos--) {
      Myservo.write(pos);
      delay(15);
    }
  }

  //for(pos=0;pos<=180;pos++){
  //Myservo.write(pos);
  //delay(15);
  //}
  //  delay(1000);
  //
  //  for(pos=180;pos>=0;pos--){
  //Myservo.write(pos);
  //delay(15);
  //}
  //  delay(1000);

}
