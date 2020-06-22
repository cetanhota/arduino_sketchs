int irmotionPin = 8; // Pin of IR Motion Sensor
int relayPin = 9; // Pin of Relay Module

void setup(){ 
  Serial.begin(9600);
  pinMode(relayPin, OUTPUT);
  // Set Pin connected to Relay as an OUTPUT
  digitalWrite(relayPin, LOW);
  // Set Pin to LOW to turn Relay OFF 
}

void loop(){
   while (digitalRead(irmotionPin) == HIGH)
   { 
   // If Motion detected
   digitalWrite(relayPin, HIGH);
   // Turn Relay ON
   Serial.println("Relay is ON");
   delay(300000);
   }
   digitalWrite(relayPin, LOW);
   Serial.println("Relay is OFF");
   // Turn Relay OFF Serial.println("Relay is OFF");
   delay(500); 
}
