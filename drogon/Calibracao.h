#ifndef CALIBRACAO_H
#define CALIBRACAO_H

#include "Refletancia.h"
class Calibracao {
	private:
  		
  	public:
		void calibrarPreto();
		void calibrarBranco();
    
  	protected:
  		Refletancia dir, esq, maisDir, maisEsq;
};

#endif
