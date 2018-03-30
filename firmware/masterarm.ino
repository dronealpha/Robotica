#include <Servo.h>

Servo myservo;

void setup(){
  Serial.begin(9600);
  myservo.attach(8);
  myservo.write(0);
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
    }
  }
}



void turnLeft(){
  myservo.write(90);
  delay(1000);
}


void turnHigth(){
  myservo.write(0);
  delay(1000);
}


