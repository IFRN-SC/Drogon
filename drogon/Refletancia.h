#ifndef REFLETANCIA_H
#define REFLETANCIA_H

#include <robo_hardware2.h>

class Refletancia {
  private:
    float preto;
    float branco;
    float cinza;
  public:
    float getPreto();
    float getBranco();
    float getCinza();

    void setPreto(float preto);
    void setBranco(float branco);
    void setCinza(float preto, float branco);
    void setCinza(int cinza);
};
#endif