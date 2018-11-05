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

void Movimento::motores90Direita() {
	robo.acionarPassoAngDir(90, -80);	
}

void Movimento::motores90Esquerda() {
	robo.acionarPassoAngEsq(90, -80);
}

void Movimento::motoresPrecisao(float distancia) {
	// Sentido true é para frente, logo, false é para trás. A distância é em centímetros.
  quantPassos = 0;
  quantRevolucoes = 0;
  circuferenciaRoda = PI * DIAMETRO_RODA;
 
	setQuantRevolucoes(abs(distancia), getCircunferenciaRoda());
	setQuantPassos();
 
 

	for (int j = 1; j <= getQuantPassos() ; j++) {
		if (distancia > 0) {
			passoDir.step(1);
			passoEsq.step(1);
		} else if (distancia < 0) {
			passoDir.step(-1);
			passoEsq.step(-1);
		}else{
			break;
		}
	}
}

float getCircunferenciaRoda() {
	return circunferenciaRoda;
}

float getQuantRevolucoes() {
	return quantRevolucoes;
}

void setQuantRevolucoes(float distancia2, float circunferenciaDaRoda) {
	quantRevolucoes = distancia2/circunferenciaDaRoda;
}

int getQuantPassos() {
	return quantPassos;
}

void setQuantPassos() {
	quantPassos = (PASSOS_POR_ROTACAO_ESQ_DEFAULT * getQuantRevolucoes()); //poderia ser PASSOS_POR_ROTACAO_DIR_DEFAULT também, mas como ambas são 64, não faz diferença.

}
