#include "Stepper.h"





void Stepper_Init(){

GPIO_INIT_PIN_DIRECTION (MOTOR_PORT, PIN0, OUTPUT);
GPIO_INIT_PIN_DIRECTION (MOTOR_PORT, PIN1, OUTPUT);
GPIO_INIT_PIN_DIRECTION (MOTOR_PORT, PIN2, OUTPUT);
GPIO_INIT_PIN_DIRECTION (MOTOR_PORT, PIN3, OUTPUT);
GPIO_INIT_PIN_DIRECTION (MOTOR_PORT, PIN4, OUTPUT);
GPIO_INIT_PIN_DIRECTION (MOTOR_PORT, PIN5, OUTPUT);

  

}


void Stepper_SetSpeed(UINT8 speed){


}


void Stepper_SetDirection(UINT8 direction){


}


void Stepper_Step(UINT8 steps){


}

