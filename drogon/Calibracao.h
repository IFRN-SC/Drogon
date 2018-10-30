#ifndef CALIBRACAO_H
#define CALIBRACAO_H

#include "Refletancia.h"
class Calibracao {
	private:
		char resposta = 'Z';
  	char respostaValores = 'Z';
		char respostaMenu = 'Z';
		char respostaMenuDois = 'Z';

		calibracao_dados cali;

		float valorMaisEsq;
		float valorEsq;
		float valorDir;
		float valorMaisDir;

  public:
		void calibrarPreto();
		void calibrarBranco();
		void pontaPe(); 

		void limparTela();
		void mostrarValores();
		void esperar();

		void chamarMenu();
		
    
  protected:
  	Refletancia dir, esq, maisDir, maisEsq;

};

#endif
