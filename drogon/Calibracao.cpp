#include "Calibracao.h"
#include <Arduino.h>

void Calibracao::chamarMenu() {
	while (respostaMenu != 'Q') {
		Serial.println(F("--------------------------------------------------"));
		Serial.println(F("P - Calibrar preto"));
		Serial.println(F("B - Calibrar branco"));
		Serial.println(F("Q - Setar cinza e sair do menu de calibração"));
		Serial.println(F("                                                  "));
		Serial.println(F("--------------------------------------------------"));
	
		respostaMenu = Serial.read();

		if (respostaMenu == 'P') {
			while (respostaMenuDois != 'Q') {
				mostrarValores();
				limparTela();

				esperar();
				limparTela();

			}

			respostaMenuDois == 'z';
		}else if (respostaMenu == 'B') {
			while (respostaMenuDois != 'Q') {
				mostrarValores();
				limparTela();

				esperar();
				limparTela();
			}

			limparTela();
		}

			
	}

	
}


void Calibracao::esperar() {
	valorMaisEsq = robo.lerSensorLinhaMaisEsq();
	valorEsq = robo.lerSensorLinhaEsq();
	valorDir = robo.lerSensorLinhaDir();
	valorMaisDir = robo.lerSensorLinhaMaisDir();

	Serial.println(F("Os valores coletados foram: "));
	Serial.println(F("+esq          esq          dir          +dir"));
	Serial.print(valorMaisEsq);
	Serial.print(F("          "));
	Serial.print(valorEsq);
	Serial.print(F("          "));
	Serial.print(valorDir);
	Serial.print(F("          "));
	Serial.println(valorMaisDir);
	Serial.println(F(""));
	Serial.println(F("------------------------------------------------"));
	Serial.println(F("Deseja usá-los na calibração?   S/N"));

	respostaValores = Serial.read();

	if (respostaMenu == 'P' && respostaValores == 'S') {
		calibrarPreto();	
	}
	if (respostaMenu == 'B' && respostaValores == 'S') {
		calibrarBranco();
	}

	limparTela();

	valorMaisEsq = 0;
	valorEsq = 0;
	valorDir = 0;
	valorMaisDir = 0;

	Serial.println(F("Deseja pegar mais valores ou sair?"));
	Serial.println(F(""));
	Serial.println(F("V - Continuar pegando valores"));
	Serial.println(F("Q - Sair"));

	respostaMenuDois = Serial.read();
	
}

void Calibracao::limparTela() {
	for (int x = 1; x <= 50; x++) {
		Serial.println(F(""));
	}
}

void Calibracao::mostrarValores() {
	while (Serial.read() != 'V') {
		Serial.println(F("+esq          esq          dir          +dir"));
		Serial.print(robo.lerSensorLinhaMaisEsq());
		Serial.print(F("          "));
		Serial.print(robo.lerSensorLinhaEsq());
		Serial.print(F("          ")); 
		Serial.print(robo.lerSensorLinhaDir());
		Serial.print(F("          "));
		Serial.println(robo.lerSensorLinhaMaisDir());

		Serial.println(F(""));
		Serial.println(F("--------------------------------------------------"));
		Serial.println(F("Pressione V para pegar os valores"));

	}
}

void Calibracao::calibrarPreto() {
	if (valorMaisDir > maisDir.getMaiorPreto()) {
		maisDir.setMaiorPreto(valorMaisDir);
	}
	if (valorDir > dir.getMaiorPreto()) {
		dir.setMaiorPreto(valorDir);
	}
	if (valorEsq > esq.getMaiorPreto()) {
		esq.setMaiorPreto(valorEsq);
	}
	if (valorMaisEsq > maisEsq.getMaiorPreto()) {
		maisEsq.setMaiorPreto(valorMaisEsq);
	}
}

void Calibracao::calibrarBranco() {
	if (valorMaisDir < maisDir.getMenorBranco()) {
		maisDir.setMenorBranco(robo.lerSensorLinhaMaisDir());
	}
	if (valorDir < dir.getMenorBranco()) {
		dir.setMenorBranco(robo.lerSensorLinhaDir());
	}
	if (valorEsq < esq.getMenorBranco()) {
		esq.setMenorBranco(robo.lerSensorLinhaEsq());
	}
	if (valorMaisEsq < maisEsq.getMenorBranco()) {
		maisEsq.setMenorBranco(robo.lerSensorLinhaMaisEsq());
	}
}
