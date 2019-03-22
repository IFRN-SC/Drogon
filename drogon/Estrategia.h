#ifndef ESTRATEGIA_H
#define ESTRATEGIA_H

#include <robo_hardware2.h>

#include "Sensores.h"
#include "Calibracao.h"
#include "Movimento.h"


class Estrategia {
	private:
    	Calibracao cali;
    	Movimento mov;
    	Sensores sensor;
    	
	public:
		void executar();
		
		void passarObstaculo();
		void fazerVerde();
		void subirRampa();
		void movimentar();
		
};

#endif
