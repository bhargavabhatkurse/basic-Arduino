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

  if(choice == 1) {
  analogWrite(R,0); //R
  analogWrite(G,255); //G
  analogWrite(B,255); //B
  }
  else if(choice == 2) {
  analogWrite(R,255); //R
  analogWrite(G,0); //G
  analogWrite(B,255); //B
  }
  else if(choice == 3) {
  analogWrite(R,255); //R
  analogWrite(G,255); //G
  analogWrite(B,0); //B
  }
  else {
  analogWrite(R,0); //R
  analogWrite(G,0); //G
  analogWrite(B,0); //B
  }
  
}
