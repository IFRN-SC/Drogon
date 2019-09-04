#ifndef MOVIMENTO_H
#define MOVIMENTO_H

#include <robo_hardware2.h>

class Movimento{
  
  public:
    void motoresFrente();
    void motoresDir();
    void motoresEsq();
    void motoresTras();
    void motoresParem();
    void superFrente();
    void girarEsq();
    void girarDir();
};
#endif
