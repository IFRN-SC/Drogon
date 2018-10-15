#ifndef MOVIMENTO_H
#define MOVIMENTO_H

#include <robo_hardware2.h>
#include "Arduino.h"


class Movimento {
	private:

	public:
		void motoresFrente();
		void motoresDireita();
		void motoresEsquerda();
		void motores90Esquerda();
		void motores90Direita();
		void subirRampa();
};

#endif
