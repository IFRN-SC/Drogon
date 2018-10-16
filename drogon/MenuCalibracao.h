#ifndef MENUCALIBRACAO_H
#define MENUCALIBRACAO_H

#include "Calibracao.h"
#include <Arduino.h>

class MenuCalibracao {
	private:
		Calibracao cali;
		char respostaMenu = 'z';
		char respostaMenuDois = 'z';
	public:

		void chamarMenu();

};

#endif
