int potentiometer; 
int value; 

void setup(){
    Serial.begin(9600);//show datas on serial port with 9600 speed
}

void loop(){
    potentiometer = analogRead(A0); //potentiometer is linked to A0 on Arduino
    Serial.println(potentiometer); //show datas 
    value = map(potentiometer, 0, 1023, 0, 255); //when potentiometer's value grows pinLed grows up too
    analogWrite(9, value); //write value to 9, 9 is linked to Led
    delay(30);
}