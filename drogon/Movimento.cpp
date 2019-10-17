#include "Movimento.h"

void Movimento::motoresFrente(){
  robo.acionarMotores(30,30);
}
void Movimento::motoresDir(){
  robo.acionarMotores(40, -30);
}
void Movimento::motoresEsq(){
  robo.acionarMotores(-30, 40);
}
void Movimento::motoresTras(){
  robo.acionarMotores(-40,-40);
}
void Movimento::motoresParem(){
  robo.acionarMotores(0,0);
}
void Movimento::superFrente(){
    robo.acionarMotores(50, 50); 
}
void Movimento::girarEsq(){
  robo.acionarMotores(-30,30);
}
void Movimento::girarDir(){
  robo.acionarMotores(30,-30);
}
void Movimento::girarEsq90(){
  robo.acionarMotores(-30,30);
  delay(600); //testar esse delay
}
void Movimento::girarDir90(){
  robo.acionarMotores(30,-30);
  delay(600); //testar delay
}
