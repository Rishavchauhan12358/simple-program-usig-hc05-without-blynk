#include <AFMotor.h>
AF_DCMotor motor1(1),motor2(2),motor3(3),motor4(4);

void setup(){
  Serial.begin(9600);
 motor1.setSpeed(200);
  motor2.setSpeed(200);
  motor3.setSpeed(200);
  motor4.setSpeed(200);
  
}
void loop(){
  if(Serial.available()>0){
    char data=Serial.read();
    switch(data){
      case'a':
     motor1.run(BACKWARD);
     delay(1000);
     motor1.run(RELEASE);
      break;
      case'b':
      
      motor1.run(FORWARD);
      delay(1000);
      motor1.run(RELEASE);
      break;
      case'c':
      motor2.run(BACKWARD);
      delay(1000);
      motor2.run(RELEASE);
      break;
      case'd':
      motor2.run(FORWARD);
      delay(1000);
      motor2.run(RELEASE);
      break;
      case'e':
      motor3.run(BACKWARD);
      delay(1000);
      motor3.run(RELEASE);
      break;
      case'f':
      motor3.run(FORWARD);
      delay(1000);
      motor3.run(RELEASE);
      break;
      case'g':
      motor4.run(BACKWARD);
      delay(500);
      motor4.run(RELEASE);
      break;
      case'h':
      motor4.run(FORWARD);
      delay(500);
      motor4.run(RELEASE);
      break;
      
      
    }
    Serial.println(data);
  }
  delay(500);
}

