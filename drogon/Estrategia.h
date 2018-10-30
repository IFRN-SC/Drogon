#ifndef ESTRATEGIA_H
#define ESTRATEGIA_H

#include <robo_hardware2.h>

#include "Sensores.h"
#include "Calibracao.h"
#include "Movimento.h"


class Estrategia {
	private:
    		Calibracao objetoCalibracao;
    		Movimento objetoMovimento;
    		Sensores objetoSensor;
    	
	public:
		void executarEstrategia();

		void passarObstaculo();
		void fazerVerde();
		void subirRampa();
		void movimentar();
		
};

#endif
