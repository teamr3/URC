#include "Arduino.h"
#include "Motor.h"
#include <Servo.h>
Servo motor;
Motor::Motor(){ }
Motor::Motor(int _pin){
	pin = _pin;
	motor.attach(pin);
}
void Motor::doPWM(float vel){
		motor.write(map((vel*10),-10,10,0,180));
}
