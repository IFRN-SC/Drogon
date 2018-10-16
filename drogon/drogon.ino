#include <robo_hardware2.h>
#include <Arduino.h>

#include "Estrategia.h"
#include "Calibracao.h"
#include "Movimento.h"
#include "Sensores.h"


Estrategia objetoEstrategia;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  robo.configurar(false);

  objetoEstrategia.pontaPe();

}


void loop() {
  // put your main code here, to run repeatedly:
    objetoEstrategia.executarEstrategia();
}
