#ifndef MOVIMENTO_H
#define MOVIMENTO_H

#define DIAMETRO_RODA 1

#include <robo_hardware2.h>
#include "Arduino.h"
#include "Sensores.h"

class Movimento : private MotorPasso {
	private:
		float quantRevolucoes = 0;
		int quantPassos = 0;
    const float PI = 3.141592;
    float circuferenciaRoda = PI * DIAMETRO_RODA;

	public:
		void motoresPrecisao(float distancia);
		void motoresFrente();
		void motoresDireita();
		void motoresEsquerda();
		void motores90Esquerda();
		void motores90Direita();
		void subirRampa();

		float getCircunferenciaRoda();
		void setCircunferenciaRoda();

		int getQuantPassos();
		void setQuantPassos();
};

#endif
