#include <Servo.h>

Servo myservo;
Servo myservo2;
void setup(){
  Serial.begin(9600);
  myservo.attach(8);
  myservo.write(0);
  myservo2.attach(8);
  myservo2.write(0);
  delay(2000);
}


void loop(){
  if(Serial.available()){
    char entrada = Serial.read();
    switch(entrada){
    case 'L':
      turnLeft();
      break;
    case 'H':
      turnHigth();
      break;
    case 'U':
      turnUP();
      break;
    case 'D':
      turnDOWN();
      break;
    }
  }
}



void turnLeft(){
  myservo.write(90);
  delay(1000);
}

void turnUP(){
  myservo2.write(180);
  delay(1000);
}


void turnDOWN(){
  myservo2.write(0);
  delay(1000);
}

void turnHigth(){
  myservo.write(0);
  delay(1000);
}


