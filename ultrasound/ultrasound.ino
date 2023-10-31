#define echoPin 8
#define trigPin 7

// defines variables
long duration; 
int distance; 

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT); 
   pinMode(2, OUTPUT); 
  Serial.begin(9600);
  
}
void loop() {
  // Clears the trigPin condition
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if(distance>10) digitalWrite(2,HIGH);
  else digitalWrite(2,LOW);
  
  
}
