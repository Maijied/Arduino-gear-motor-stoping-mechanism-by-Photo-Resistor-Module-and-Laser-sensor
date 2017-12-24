//Code written by Maijied.
#define NOTE_F6  1397
#define NOTE_G4  392

#define E1 10  // Enable Pin for motor 1
#define E2 11
#define I1 8   // Control pin 1 for motor 1
#define I2 9   // Control pin 2 for motor 1
#define I3 12  // Control pin 1 for motor 2
#define I4 13  // Control pin 2 for motor 2


 //Define buzzerPin
int laserPin = 3;

int LaserSensor = 5;
int SensorReading = HIGH; 

void setup() {
    pinMode(E1, OUTPUT);
    pinMode(E2, OUTPUT);
 
    pinMode(I1, OUTPUT);
    pinMode(I2, OUTPUT);
    pinMode(I3, OUTPUT);
    pinMode(I4, OUTPUT);

  pinMode (laserPin, OUTPUT); // define the digital output interface 13 feet


   pinMode(LaserSensor, INPUT);
}

 


void loop() {
    analogWrite(E1, 255); // Run in half speed
    analogWrite(E2, 255); // Run in full speed
 
//    digitalWrite(I1, HIGH);
//    digitalWrite(I2, LOW);
//    digitalWrite(I3, HIGH);
//    digitalWrite(I4, LOW);

   digitalWrite (laserPin, HIGH); // Turn Laser On
   delay (1000); // On For Half a Second
   digitalWrite (laserPin, LOW); // Turn Laser Off
   //delay (500); // Off for half a second

   digitalWrite(laserPin, HIGH);
  //delay(2000);
  SensorReading = digitalRead(LaserSensor);
  if (SensorReading == HIGH)
  {
    
    //Motor Off
    
    analogWrite(E1, 255); // Run in half speed
    analogWrite(E2, 255); // Run in full speed
 
    digitalWrite(I1, LOW);
    digitalWrite(I2, LOW);
    digitalWrite(I3, LOW);
    digitalWrite(I4, LOW);
  
  }
 
  else
  {
    
    
    analogWrite(E1, 255); // Run in half speed
    analogWrite(E2, 255); // Run in full speed
    //Motor Continue
    digitalWrite(I1, HIGH);
    digitalWrite(I2, LOW);
    digitalWrite(I3, HIGH);
    digitalWrite(I4, LOW);
  }
}


