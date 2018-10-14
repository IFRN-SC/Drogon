#include <robo_hardware2.h>
#include "Movimento.h"

//o código está adaptado para os dois motores no sentido correto

void Movimento::motoresFrente() {
	robo.acionarMotoresPasso(60, 60);
}

void Movimento::motoresDireita() {
	robo.acionarMotoresPasso(60, -60);
}

void Movimento::motoresEsquerda() {
	robo.acionarMotoresPasso(-60, 60);
}

void Movimento::motores90Direita() {
	robo.acionarPassoAngDir(90, 60);	
}

void Movimento::motores90Esquerda() {
	robo.acionarPassoAngEsq(90, 60);
}
