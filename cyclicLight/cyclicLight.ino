int pinLed = 6;

void setup(){
    pinMode(pinLed, OUTPUT); //in pinLed there is the output
}

void loop(){

    for(int i = 0; i <= 255; i++){ //255 maximum value
    analogWrite(pinLed,i); //write the value on pinLed(switch on)
    delay(10); 
    }

    for(int i = 255; i >= 0 ; i--){ //255 maximum value
    analogWrite(pinLed,i); //write the value on pinLed(switch off)
    delay(10);
    }
}