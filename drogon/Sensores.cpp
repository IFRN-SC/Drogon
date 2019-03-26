//pendência em terminar viuVerde() e viuRampa()

#include <robo_hardware2.h>
#include "Sensores.h"


bool Sensores::viuObstaculo() {
	if (robo.lerSensorSonarFrontal() <= 15) {
    return true;
  }else{
    return false;
  }
}

bool Sensores::viuVerde() {
	return false;
}

bool Sensores::viuRampa() {
	return false;
}

/*bool Sensores::isMaisDirPreto() { return robo.lerSensorLinhaMaisDir() < maisDir.getCinza();}
bool Sensores::isMaisEsqPreto() { return robo.lerSensorLinhaMaisEsq() < maisEsq.getCinza();}
bool Sensores::isDirPreto() { return robo.lerSensorLinhaDir() < dir.getCinza();}
bool Sensores::isEsqPreto() { return robo.lerSensorLinhaEsq() < esq.getCinza();}*/

bool Sensores::isMaisDirPreto() { return robo.lerSensorLinhaMaisDir() < maisDir.getCinza();}
bool Sensores::isMaisEsqPreto() { return robo.lerSensorLinhaMaisEsq() < maisEsq.getCinza();}
bool Sensores::isDirPreto() { return robo.lerSensorLinhaDir() < 19;}
bool Sensores::isEsqPreto() { return robo.lerSensorLinhaEsq() < 34;}

/*bool Sensores::PP() { return (isEsqPreto()) && (isDirPreto()); }
bool Sensores::BB() { return (!isEsqPreto()) && (!isDirPreto());}
bool Sensores::BP() { return (!isEsqPreto()) && (isDirPreto());}
bool Sensores::PB() { return (isEsqPreto()) && (!isDirPreto());}*/

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
