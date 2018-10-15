#include "Calibracao.h"

void Calibracao::calibrarPreto() {
	if (robo.lerSensorLinhaMaisDir() > maisDir.getMaiorPreto()) {
		maisDir.setMaiorPreto(robo.lerSensorLinhaMaisDir());
	}
	if (robo.lerSensorLinhaDir() > dir.getMaiorPreto()) {
		dir.setMaiorPreto(robo.lerSensorLinhaDir());
	}
	if (robo.lerSensorLinhaEsq() > esq.getMaiorPreto()) {
		esq.setMaiorPreto(robo.lerSensorLinhaEsq());
	}
	if (robo.lerSensorLinhaMaisEsq() > maisEsq.getMaiorPreto()) {
		maisEsq.setMaiorPreto(robo.lerSensorLinhaMaisEsq());
	}
}

void Calibracao::calibrarBranco() {
	if (robo.lerSensorLinhaMaisDir() < maisDir.getMenorBranco()) {
		maisDir.setMenorBranco(robo.lerSensorLinhaMaisDir());
	}
	if (robo.lerSensorLinhaDir() < dir.getMenorBranco()) {
		dir.setMenorBranco(robo.lerSensorLinhaDir());
	}
	if (robo.lerSensorLinhaEsq() < esq.getMenorBranco()) {
		esq.setMenorBranco(robo.lerSensorLinhaEsq());
	}
	if (robo.lerSensorLinhaMaisEsq() < maisEsq.getMenorBranco()) {
		maisEsq.setMenorBranco(robo.lerSensorLinhaMaisEsq());
	}
}
