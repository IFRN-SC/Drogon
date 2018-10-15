#include "MenuCalibracao.h";


void MenuCalibracao::chamarMenu() {
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
				Serial.println(F("+esq          esq          dir          +dir"));
				Serial.println(F(maisEsq.lerValorSensorMaisEsq() + "          " + esq.lerValorSensorEsq() + "          " + 					dir.lerValorSensorDir() + "          " + maisDir.lerValorSensorMaisDir());
				Serial.println(F("");
				Serial.println(F("----------------------------------------"));
				Serial.println(F("Pressione P para ler os valores de PRETO"));
				Serial.println(F("Pressione Q para voltar para o menu principal"));
				respostaMenuDois = Serial.read();	

				if (respostaMenuDois == 'P') {
					cali.calibrarPreto();
				}
			
				for (int x = 1; x <= 50; x++) {
					Serial.println("");
				}

				
			}

			respostaMenuDois == 'z';
		}else if (respostaMenu == 'B') {
			while (respostaMenuDois != 'Q') {		
				Serial.println(F("+esq          esq          dir          +dir"));
				Serial.println(F(maisEsq.lerValorSensorMaisEsq() + "          " + esq.lerValorSensorEsq() + "          " + 					dir.lerValorSensorDir() + "          " + maisDir.lerValorSensorMaisDir());
				Serial.println(F("");
				Serial.println(F("----------------------------------------"));
				Serial.println(F("Pressione B para ler os valores de BRANCO"));
				Serial.println(F("Pressione Q para voltar para o menu principal"));
				respostaMenuDois = Serial.read();	

				if (respostaMenuDois == 'B') {
					cali.calibrarBranco();
				}
			
				for (int x = 1; x <= 50; x++) {
					Serial.println("");
				}
			}
		}
		
		for (int x = 1; x <= 50; x++) {
			Serial.println("");
		}

			
	}

	
}


