# traffic-lights
Traffic light junction powered by Arduino Uno and programmed via Arduino IDE.
Made by: broodlingLarva
Code:

// light one
int red1 = 10;
int yellow1 = 9;
int green1 = 8;

// light two
int red2 = 13;
int yellow2 = 12;
int green2 = 11;

void setup(){
    // light one
    pinMode(red1, OUTPUT);
    pinMode(yellow1, OUTPUT);
    pinMode(green1, OUTPUT);

    // light two
    pinMode(red2, OUTPUT);
    pinMode(yellow2, OUTPUT);
    pinMode(green2, OUTPUT);
}
void loop(){
    changeLights();
    delay(10000);
}
void changeLights(){
    // turn both yellows on
    digitalWrite(green1, LOW);
    digitalWrite(yellow1, HIGH);
    digitalWrite(yellow2, HIGH);
    digitalWrite(red2, LOW); 
    delay(5000);

    // turn both yellows off, and opposite green and red
    digitalWrite(yellow1, LOW);
    digitalWrite(red1, HIGH);
    digitalWrite(yellow2, LOW);
    digitalWrite(red2, LOW);
    digitalWrite(green2, HIGH);
    delay(5000);

    // both yellows on again
    digitalWrite(yellow1, HIGH);
    digitalWrite(yellow2, HIGH);
    digitalWrite(green2, LOW);
    digitalWrite(red1, LOW);
    digitalWrite(red2, LOW);
    delay(3000);

    // turn both yellows off, and opposite green and red
    digitalWrite(green1, HIGH);
    digitalWrite(yellow1, LOW);
    digitalWrite(red1, LOW);
    digitalWrite(yellow2, LOW);
    digitalWrite(red2, HIGH);
    delay(5000);

}
