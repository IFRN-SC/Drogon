#ifndef MOVIMENTO_H
#define MOVIMENTO_H

#define DIAMETRO_RODA 11
#define DIAMETRO_ROBO 19.5

#include <robo_hardware2.h>
#include "Arduino.h"
#include "Sensores.h"

class Movimento : private MotorPasso {
	private:
	
		int contador = 0;

		float angulosPrecisao = 0;
    	float circunferenciaRoda = PI * DIAMETRO_RODA;
    	float circunferenciaRobo = PI * DIAMETRO_ROBO;

	public:
		void motoresPrecisao(float distancia, int vel);
		void motoresFrente();
		void motoresDireita();
		void motoresEsquerda();
		void girarRobo(float graus, int vel);

		float getCircunferenciaRoda();
		float getCircunferenciaRobo();

		int getQuantGraus();

		float getAngulosPrecisao();
		void setAngulosPrecisao(float distancia);

};

#endif
