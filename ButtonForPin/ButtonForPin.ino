int tyme = 1000; 
int pinLed = 8; 
int buttonPin = 9; 

void setup(){
    pinMode(pinLed, OUTPUT); //pinLed is the output
    pinMode(buttonPin, INPUT); //buttonPin is the input
}

void loop(){
    if(digitalRead(buttonPin) == HIGH){ //if buttonPin is pressed(HIGH)
        digitalWrite(pinLed, HIGH); //so pinLed is going to switch on
    }else{
        digitalWrite(pinLed, LOW); //otherwise pinLed is switched off
    }
}