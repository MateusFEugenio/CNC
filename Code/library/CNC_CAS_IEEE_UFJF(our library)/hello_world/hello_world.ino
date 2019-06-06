#include "CNC_CAS_IEEE_UFJF.h"

const int stepsPerRevolution = 200; //1.8º por passo

Stepper_CNC myStepper(stepsPerRevolution, 8, 9, 10, 11);
Stepper_CNC myStepper1(stepsPerRevolution, 4, 5, 6, 7);

int n = 100;
const int pot = A0;

int n1 = 100;
const int pot1 = A1;

void setup ()
{
  myStepper.setSpeed(60);
  myStepper1.setSpeed(60);

  Serial.begin(115200);
}

void loop ()
{
  n++;
  myStepper.step(n);
  /*
  int p = analogRead(pot);
  if(p > 500)
  {
    myStepper.step(n);
  }
  if(p < 200)
  {
    myStepper.step(-n);
  }

  
  int p1 = analogRead(pot1);
  if(p1 > 500)
  {
    myStepper1.step(n1);
  }
  if(p1 < 200)
  {
    myStepper1.step(-n1);
  }*/
}
