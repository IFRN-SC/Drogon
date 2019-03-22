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

void Movimento::motoresPrecisao(float distancia, int vel = 90) { //distancia em centímetros

	angulosPrecisao = distancia * 360 / circunferenciaRoda;
	robo.acionarMotoresPassoEmGraus(vel, angulosPrecisao);
}

void Movimento::girarRobo(float graus, int vel=60) {

	//quantidade positiva de graus é um giro para a direita; negativa, para a esquerda. 

	float quantGraus = graus*circunferenciaRobo/circunferenciaRoda;
 
  Serial.println(quantGraus);
	for (contador = 0; contador < abs(quantGraus); contador += 5) {
		if (graus > 0) {
			robo.acionarPassoAngEsq(5, vel);
			robo.acionarPassoAngDir(-5, vel);
		}else if (graus < 0){
			robo.acionarPassoAngEsq(-5, vel);
			robo.acionarPassoAngDir(5, vel);
		}
	}
}


float Movimento::getCircunferenciaRoda() {
	return circunferenciaRoda;
}

float Movimento::getCircunferenciaRobo() {
	return circunferenciaRobo;
}
