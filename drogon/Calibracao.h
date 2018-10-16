#ifndef CALIBRACAO_H
#define CALIBRACAO_H

#include "Refletancia.h"
class Calibracao {
	private:
  		char respostaValores = 'z';
		char respostaMenu = 'z';
		char respostaMenuDois = 'z';

		float valorMaisEsq;
		float valorEsq;
		float valorDir;
		float valorMaisDir;

  	public:
		void calibrarPreto();
		void calibrarBranco();

		void limparTela();
		void mostrarValores();
		void esperar();

		void chamarMenu();
		
    
  	protected:
  		Refletancia dir, esq, maisDir, maisEsq;

};

#endif
