#define R 9
#define G 10
#define B 11
void setup() {
  pinMode(9,OUTPUT); 
  pinMode(10,OUTPUT);  
  pinMode(11,OUTPUT);  
  Serial.begin(9600);
  //Serial.println("rerun");
}


void loop() {

  Serial.println("Enter choice: ");
  //delay(1000);

  while(Serial.available() == 0 ) {}
  int choice=Serial.parseInt();
  int choice2=Serial.parseInt();
  int choice3=Serial.parseInt();

  
  analogWrite(R,choice); //R
  analogWrite(G,choice2); //G
  analogWrite(B,choice3); //B
  
  
 
  
}
