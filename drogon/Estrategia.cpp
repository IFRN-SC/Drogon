#include "Estrategia.h"

//VERIFICAR PONTAPE INICIAL


void Estrategia::executar() {
	if (sensor.viuObstaculo()) {
		this->passarObstaculo();

	}else if (sensor.viuVerde()) {
		this->fazerVerde();

	}else if (sensor.viuRampa()){
		this->subirRampa();

	}else{
		this->movimentar();
	}

}

void Estrategia::movimentar() {
	if (sensor.PP()) {
		mov.motoresFrente();
	}else if (sensor.BB()) {
		mov.motoresFrente();
	}else if (sensor.PB()) {
		mov.motoresEsquerda();
	}else{
		mov.motoresDireita();
	}
	
}

void Estrategia::passarObstaculo() {
	mov.motoresPrecisao(10, 90);
  mov.girarRobo(90, 90);
  mov.motoresPrecisao(20, 90);
  mov.girarRobo(-90, 90);
  mov.motoresPrecisao(40, 90);
  mov.girarRobo(-90, 90);
  mov.motoresPrecisao(20, 90);
  mov.girarRobo(90, 90);
  
}

void Estrategia::viuObstaculo() {
  
   
}
