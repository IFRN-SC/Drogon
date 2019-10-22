#ifndef ESTRATEGIA_H
#define ESTRATEGIA_H

#include <robo_hardware2.h>
#include "Refletancia.h"
#include "Movimento.h"
#include "Calibracao.h"
#include "Sensores.h"

class Estrategia {
  private:
    Movimento movi;
    Calibracao c;
    Sensores sensor;
  public:
    void seguirLinha(); 
    void calibrar();
    void desviarObs();
    void redutor();
    void executar();  
    void rampa();
};
#endif
