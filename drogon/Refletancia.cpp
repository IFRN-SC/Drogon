#include <robo_hardware2.h>
#include "Refletancia.h"

float Refletancia::getMaiorPreto() {
	return this->maiorPreto;
}

float Refletancia::getMenorBranco() {
	return this->menorBranco;	
}


float Refletancia::getCinza() {
	return 50;
//	return this->cinza;
}

void Refletancia::setMaiorPreto(float preto) {
	this->maiorPreto = preto;
}

void Refletancia::setMenorBranco(float branco) {
	this->menorBranco = branco;
}

void Refletancia::setCinza(float preto, float branco) {
	this->cinza = (preto+branco)/2; 
}
