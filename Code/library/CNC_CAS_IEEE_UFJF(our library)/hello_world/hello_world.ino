/* Cógido feito no dia 6 de Junho de 2019 onde o teste fopi feito por movimento do motor 
 *  fazendo inversão nas tecla do Teclado com as velocidades.
*/
#include <Stepper.h> 

const int stepsPerRevolution = 200; 
  
//Inicializa a biblioteca utilizando as portas de 8 a 11 para 
//ligacao ao motor 
Stepper myStepper(stepsPerRevolution, 8,10,9,11); 
  
void setup() 
{ 
 //Determina a velocidade inicial do motor 
 myStepper.setSpeed(100);
Serial.begin(9600);

} 
  

void loop() {

char tecla;
if(Serial.available())
{
  tecla = Serial.read();

  if(tecla == 'a')
  {
     myStepper.step(-6000); 
 Serial.println("Esquerda");
  }

 
if(tecla == 'd'){
 myStepper.step(6000); 
 Serial.println("direita");
 }

if(tecla == 's'){
  myStepper.step(0);
 
 Serial.println("Zero"); 
}
delay(10);
}}
