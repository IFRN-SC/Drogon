#include <robo_hardware2.h>
#include "Movimento.h"

//o código está adaptado para os dois motores no sentido contrario

void Movimento::motoresFrente() {
	robo.acionarMotoresPasso(-80, 80);
}

void Movimento::motoresDireita() {
	robo.acionarMotoresPasso(-80, -80);
}

void Movimento::motoresEsquerda() {
	robo.acionarMotoresPasso(80, 80);
}

void Movimento::motoresPrecisao(float distancia, int vel) {
	
}

void Movimento::girarRoboEmGraus(float graus, int vel=60) {

	//quantidade positiva de graus é um giro para a direita; negativa, para a esquerda. 

	quantGraus = (getCircunferenciaRoda() * graus) / 360;

	for (contador = 0; contador < getQuantGraus(); contador++) {
		if (graus > 0) {
			robo.acionarPassoAngEsq(1, vel);
			robo.acionarPassoAngDir(-1, vel);
		}else if (graus < 0){
			robo.acionarPassoAngEsq(-1, vel);
			robo.acionarPassoAngDir(1, vel);
		}
	}
}

int Movimento::getQuantGraus() {
	return quantGraus;

}

float Movimento::getCircunferenciaRoda() {
	return circunferenciaRoda;
}

float Movimento::getCircunferenciaRobo() {
	return circunferenciaRobo;
}
