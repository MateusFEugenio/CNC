#include "CNC_CAS_IEEE_UFJF.h"

const int stepsPerRevolution = 200; //1.8º por passo
Stepper_CNC myStepper(stepsPerRevolution, 16, 5, 4, 0);
//                                        D0,D1,D2,D3

int n = 0;

void setup ()
{
  myStepper.setSpeed(60);

  Serial.begin(115200);
}

void loop ()
{
  //Serial.println("clockwise");
  //myStepper.step(stepsPerRevolution);
  //delay(1000);

  // step one revolution in the other direction:
  //Serial.println("counterclockwise");
  //myStepper.step(-stepsPerRevolution);
  //delay(1000);
  n++;
  myStepper.step(n);
  delay(10);
}
