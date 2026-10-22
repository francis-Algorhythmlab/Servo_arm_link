#include<Servo.h>

int gripper = 6; //14 25 26 27
int lk1 = 4;
int lk2 = 5;
int base = 3;

Servo grip_sv;
Servo lk11;
Servo lk22;
Servo bas1;


void setup() {
  // put your setup code here, to run once:
  grip_sv.attach(gripper);
  lk11.attach(lk1);
  lk22.attach(lk2);
  bas1.attach(base);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 160; i>20; i=i-5){
    grip_sv.write(i);
    digitalWrite(11, HIGH);
    delay(200);
    digitalWrite(11, LOW);
    lk11.write(i);
    digitalWrite(10, HIGH);
    delay(200);
    digitalWrite(10, LOW);
    lk22.write(i);
    digitalWrite(9, HIGH);
    delay(200);
    digitalWrite(9, LOW);
    bas1.write(i);
    digitalWrite(8, HIGH);
    delay(200);
    digitalWrite(8, LOW);
  }

  for(int i = 180; i>0; i=i-5){
    grip_sv.write(i);
    digitalWrite(11, HIGH);
    lk11.write(i);
    digitalWrite(10, HIGH);
    lk22.write(i);
    digitalWrite(9, HIGH);
    bas1.write(i);
    digitalWrite(8, HIGH);
    delay(150);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
    delay(100);
  }


}
