#ifndef SENSORES_H
#define SENSORES_H

#include <robo_hardware2.h>
#include "Refletancia.h"
#include "Calibracao.h"

class Sensores: public Calibracao {
	private:
			
	public:
		void setarCinzas();
			
		bool viuObstaculo();
		bool viuVerde();
		bool viuRampa();

		bool isMaisDirPreto();
		bool isMaisEsqPreto();
		bool isDirPreto();
		bool isEsqPreto();

		bool PP();
		bool BB();
		bool BP();
		bool PB();
};

#endif
