#ifndef SENSORES_H
#define SENSORES_H

#include <robo_hardware2.h>
#include "Refletancia.h"

class Sensores : public Calibracao {
	private:
		Refletancia maisEsq;
		Refletancia esq;
		Refletancia dir;	
		Refletancia maisDir;	
	public:
		void setarCinzas();
			
		bool viuObstaculo();
		bool viuVerde();
		bool viuRampa();
};

#endif
