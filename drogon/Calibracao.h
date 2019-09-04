#ifndef CAlIBRACAO_H
#define CAlIBRACAO_H

#include "Refletancia.h"

#include <robo_hardware2.h>

class Calibracao{
  private:

    char resposta = 'C';
    char valorCores = 'V';

    calibracao_dados cali;

    int contadorWhile = 0;

    void calibrarPreto();
    float pretoMaisEsq;
    float pretoEsq;
    float pretoMaisDir;
    float pretoDir;

    void calibrarBranco();
    float brancoMaisEsq;
    float brancoEsq;
    float brancoMaisDir;
    float brancoDir; 

  public:

    void calibrar();
    void mostrarValores();
    void valorCorte();

    void tempo();

    void limparTela();
  protected:
    Refletancia maisEsq, esq, maisDir, dir;
};
#endif 
