// defines pins numbers
#define trigPin  D1
#define echoPin  D2
#define buzzer  D3
#define ledPin  D4
#define trigPina  D0
#define echoPina  D5
#define buzzera  D6
#define ledPina  D7


// defines variables
long duration;
int distance;
int safetyDistance;
long durationa;
int distancea;
int safetyDistancea;


void setup() {
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
pinMode(buzzer, OUTPUT);
pinMode(ledPin, OUTPUT);
pinMode(trigPina, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPina, INPUT); // Sets the echoPin as an Input
pinMode(buzzera, OUTPUT);
pinMode(ledPina, OUTPUT);
Serial.begin(9600); // Starts the serial communication
}


void loop() {
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(100000);

// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(1000);
digitalWrite(trigPin, LOW);

// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);

// Calculating the distance
distance= duration*0.034/2;

safetyDistance = distance;
if (safetyDistance <= 5){
  digitalWrite(buzzer, LOW);
  digitalWrite(ledPin, HIGH);//ledPin
}
else{
  
  digitalWrite(ledPin, LOW);
   digitalWrite(buzzer, HIGH);
}

// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);
// Clears the trigPin
digitalWrite(trigPina, LOW);
delayMicroseconds(100000);

// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPina, HIGH);
delayMicroseconds(1000);
digitalWrite(trigPina, LOW);

// Reads the echoPin, returns the sound wave travel time in microseconds
durationa = pulseIn(echoPina, HIGH);

// Calculating the distance
distancea= durationa*0.034/2;

safetyDistancea = distancea;
if (safetyDistancea <= 5){
  digitalWrite(buzzera, LOW);
  digitalWrite(ledPina, HIGH);//ledPin
}
else{
  
  digitalWrite(ledPina, LOW);
   digitalWrite(buzzera, HIGH);
}

// Prints the distance on the Serial Monitor
Serial.print("Distancea: ");
Serial.println(distancea);
}


