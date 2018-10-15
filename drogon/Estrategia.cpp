#include "Estrategia.h"


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
		
}

void Estrategia::chamarMenu() {
	
}
