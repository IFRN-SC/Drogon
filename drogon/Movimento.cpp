#include <robo_hardware2.h>
#include "Movimento.h"

//o código está adaptado para os dois motores no sentido correto

void Movimento::motoresFrente() {
	robo.acionarMotoresPasso(80, 80);
}

void Movimento::motoresDireita() {
	robo.acionarMotoresPasso(80, -80);
}

void Movimento::motoresEsquerda() {
	robo.acionarMotoresPasso(-80, 80);
}

void Movimento::motores90Direita() {
	robo.acionarPassoAngDir(90, 80);	
}

void Movimento::motores90Esquerda() {
	robo.acionarPassoAngEsq(90, 80);
}
