#include "Estrategia.h"

//VERIFICAR PONTAPE INICIAL


void Estrategia::executarEstrategia() {
	if (objetoSensor.viuObstaculo()) {
		this->passarObstaculo();

	}else if (objetoSensor.viuVerde()) {
		this->fazerVerde();

	}else if (objetoSensor.viuRampa()){
		this->subirRampa();

	}else{
		this->movimentar();
	}

}

void Estrategia::movimentar() {
	if (objetoSensor.PP()) {
		objetoMovimento.motoresFrente();
	}

	if (objetoSensor.BB()) {
		objetoMovimento.motoresFrente();
	}

	if (objetoSensor.PB()) {
		objetoMovimento.motoresEsquerda();
	}

	if (objetoSensor.BP()){
		objetoMovimento.motoresDireita();
	}
}
