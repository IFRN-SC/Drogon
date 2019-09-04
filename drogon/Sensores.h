#ifndef SENSORES_H
#define SENSORES_H

#include <robo_hardware2.h>

#include "Calibracao.h"

class Sensores: public Calibracao {
  private:

  public:
    #define DIST_SONAR 7;
    bool viuObs();
    
    bool maisDirBranco();
    bool maisEsqBranco();
    bool dirBranco();
    bool esqBranco();

    bool bbbb();
    bool pppp();
    bool bbpp();
    bool ppbb();
    
    bool bpbb();
    bool bbpb();
    bool bbbp();
    bool pbbb();
    
    bool pbpp();
    bool ppbp();
    bool pppb();
    bool bppp();
    
    bool pbbp();
    bool bppb();
    bool bpbp();
    bool pbpb();
};
#endif
