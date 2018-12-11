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

void Movimento::motoresPrecisao(float distancia, int vel) {
	// Sentido true é para frente, logo, false é para trás. A distância é em centímetros.
	// 1 passo = 5,625°

	circuferenciaRoda = PI * DIAMETRO_RODA;
	quantRevolucoes = distancia/circuferenciaRoda;
  	quantGraus = 360 * quantRevolucoes;
  	robo.acionarMotoresEmGraus(vel, quantGraus);
}

