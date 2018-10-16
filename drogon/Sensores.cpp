//pendência em terminar viuVerde() e viuRampa()

#include <robo_hardware2.h>
#include "Sensores.h"

#define DISTANCIA_SONAR 10


bool Sensores::viuObstaculo() {
	return robo.lerSensorSonarFrontal() < DISTANCIA_SONAR;
}

bool Sensores::viuVerde() {
	return false;
}

bool Sensores::viuRampa() {
	return false;
}

bool Sensores::isMaisDirPreto() { return robo.lerSensorLinhaMaisDir() < maisDir.getCinza();}
bool Sensores::isMaisEsqPreto() { return robo.lerSensorLinhaMaisEsq() < maisEsq.getCinza();}
bool Sensores::isDirPreto() { return robo.lerSensorLinhaDir() < dir.getCinza();}
bool Sensores::isEsqPreto() { return robo.lerSensorLinhaEsq() < esq.getCinza();}

bool Sensores::PP() { return (isEsqPreto()) && (isDirPreto()); }
bool Sensores::BB() { return (!isEsqPreto()) && (!isDirPreto());}
bool Sensores::BP() { return (!isEsqPreto()) && (isDirPreto());}
bool Sensores::PB() { return (isEsqPreto()) && (!isDirPreto());}


void Sensores::setarCinzas() {
	maisDir.setCinza(maisDir.getMaiorPreto(), maisDir.getMenorBranco());
	dir.setCinza(dir.getMaiorPreto(), dir.getMenorBranco());
	esq.setCinza(esq.getMaiorPreto(), esq.getMenorBranco());
	maisEsq.setCinza(maisEsq.getMaiorPreto(), maisEsq.getMenorBranco());
}


