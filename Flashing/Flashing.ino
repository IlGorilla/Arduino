int time = 1000;
int pinLed = 8; 

void setup(){
    pinMode(pinLed, OUTPUT); //pinLed is output
}

void loop(){
    digitalWrite(pinLed, HIGH); //led switch on
    delay(time); //delay 
    digitalWrite(pinLed, LOW); //led switch off
    delay(time); //delay 
}