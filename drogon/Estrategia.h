#ifndef ESTRATEGIA_H
#define ESTRATEGIA_H

#include <robo_hardware2.h>
#include "Sensores.h"
#include "Movimento.h"

class Estrategia {
	private:
    		Sensores objetoSensor;
    		Movimento objetoMovimento;
	public:
		void executarEstrategia();

		void chamarMenu();
		void passarObstaculo();
		void fazerVerde();
		void subirRampa();
		void movimentar();
		
};

#endif
