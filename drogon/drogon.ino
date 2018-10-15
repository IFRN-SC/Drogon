#include <robo_hardware2.h>

void setup() {
  // put your setup code here, to run once:
  robo.configurar(false);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  robo.acionarMotoresPasso(80, 80);
}
