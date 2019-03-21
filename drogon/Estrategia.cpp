#include "Estrategia.h"

//VERIFICAR PONTAPE INICIAL


void Estrategia::executar() {
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
	}else if (objetoSensor.BB()) {
		objetoMovimento.motoresFrente();
	}else if (objetoSensor.PB()) {
		objetoMovimento.motoresEsquerda();
	}else{
		objetoMovimento.motoresDireita();
	}

	

	

	
}
