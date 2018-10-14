#ifndef SENSORES_H
#define SENSORES_H

#include <robo_hardware2.h>
#include "Refletancia.h"

Refletancia maisEsq;
Refletancia esq;
Refletancia dir;
Refletancia maisDir;

class Sensores {
	private:
		
	public:
		bool viuObstaculo();
		bool viuVerde();
		bool viuRampa();
};

#endif
