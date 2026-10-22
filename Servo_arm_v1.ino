#include<ESP32Servo.h>

int gripper = 14; //14 25 26 27
int lk1 = 25;
int lk2 = 26;
int base = 27;

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

}

void loop() {
  // put your main code here, to run repeatedly:
  /*for(int i = 160; i>20; i=i-6){
    grip_sv.write(i);
    delay(500);
    lk11.write(i);
    delay(500);
    lk22.write(i);
    delay(500);
    bas1.write(i);
    delay(500);
  } */

  for(int i = 180; i>0; i=i-5){
    grip_sv.write(i);
    // lk11.write(i);
    // lk22.write(i);
    // bas1.write(i);
    delay(500);
  }

}
