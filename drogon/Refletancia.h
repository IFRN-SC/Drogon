#ifndef REFLETANCIA_H
#define REFLETANCIA_H

#include <robo_hardware2.h>
class Refletancia {
	private:
		float maiorPreto;	
		float menorBranco;
		float cinza;

	public:
		float getMaiorPreto();
		float getMenorBranco();
		float getCinza();
		
		void setMaiorPreto(float preto);
		void setMenorBranco(float branco);
		void setCinza(float preto, float branco);


};

#endif
