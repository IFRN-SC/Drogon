#include <robo_hardware2.h> //refletancia_interferencia
#include "Refletancia.h"
#include "Movimento.h"
#include "Estrategia.h"
#include "Calibracao.h"

Estrategia estra;
Movimento movi;

void setup(){
  Serial.begin(9600);
  robo.configurar(false);
  estra.calibrar();
  
  pinMode(28, INPUT_PULLUP);
}
void loop(){
  estra.executar();
}
