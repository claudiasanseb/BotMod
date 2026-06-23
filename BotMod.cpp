#include "BotMod.h"

// Configuración inicial de la placa
BotMod::BotMod() {
  pinMode(_buzzer, OUTPUT);
  pinMode(_pushbutton, INPUT);
  pinMode(_led, OUTPUT);
  pinMode(_laser, OUTPUT);
}

// Emite un pitido
void BotMod::Beep() {
  digitalWrite(_buzzer, HIGH);
  delay(250);
  digitalWrite(_buzzer, LOW);
  delay(250);  
}

// Lee si el botón está pulsado
bool BotMod::PushButton() {
  return digitalRead(_pushbutton);
}

// Enciende el anillo de LEDs (Daño)
void BotMod::Led(int intensity) {
  analogWrite(_led, intensity); 
}

// Dispara el láser
void BotMod::Laser(int intensity) {
  analogWrite(_laser, intensity); 
}

// Lee el escudo izquierdo
int BotMod::Left_LDR() {
  return analogRead(_left_ldr);
}

// Lee el escudo derecho
int BotMod::Right_LDR() {
  return analogRead(_right_ldr);
}

// --- FUNCIONES DE LOS SERVOMOTORES ---

// Iniciar los motores
void BotMod::init_servos() {
  _servoL.attach(_pin_servo_left);
  _servoR.attach(_pin_servo_right);
}

// Mover el motor izquierdo
void BotMod::Servo_Left(int angle) {
  _servoL.write(angle);
}

// Mover el motor derecho
void BotMod::Servo_Right(int angle) {
  _servoR.write(angle);
}