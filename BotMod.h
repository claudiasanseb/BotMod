#ifndef BotMod_h
#define BotMod_h

#include "Arduino.h"
#include <Servo.h>

class BotMod {
  public:
    BotMod();
    
    // Funciones del Laser Tag
    void Beep();
    bool PushButton();
    void Led(int intensity); 
    void Laser(int intensity);
    int Left_LDR();
    int Right_LDR();

    // Funciones de los Servomotores
    void init_servos();
    void Servo_Left(int angle);
    void Servo_Right(int angle);

  private:
    int _buzzer = 4;
    int _pushbutton = 16;
    int _red = 13;        
    
    int _laser = 5;       
    int _led = 6;         
    int _left_ldr = A1;   
    int _right_ldr = A2;  

    // Servomotores 
    Servo _servoL;
    Servo _servoR;
    
    int _pin_servo_left = 6;  
    int _pin_servo_right = 5;
};

#endif