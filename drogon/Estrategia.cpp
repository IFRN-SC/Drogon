#include "Estrategia.h"

void Estrategia::calibrar() {
  sensor.tempo();
}
void Estrategia::seguirLinha() {

  if (sensor.bbbb()) { //bbbb
    movi.motoresFrente();

  } else if (sensor.pppp()) { //pppp
    movi.motoresFrente();

  } else if (sensor.bbpp()) { //bbpp
    /*while(!sensor.bbbb()){
      movi.motoresFrente();
      }*/
    movi.motoresDir();

  } else if (sensor.ppbb()) { //ppbb
    /*while(!sensor.bbbb()){
      movi.motoresFrente();
      }*/
    movi.motoresEsq();

  } else if (sensor.bpbb()) {
    movi.motoresEsq();

  } else if (sensor.bbpb()) {
    movi.motoresDir();

  } else if (sensor.bppb()) {
    /*while(!sensor.bbbb()){
      movi.motoresDir();
      }*/
    movi.motoresFrente();
  } else if (sensor.bppp()) {
    /*while(!sensor.bbbb()){
      movi.motoresFrente();
      }*/
    movi.motoresDir();

  } else if (sensor.pppb()) { //teste600
    /*while(!sensor.bbbb()){
      movi.motoresFrente();
      }*/
    movi.motoresEsq();
  } else if (sensor.bbbp()) {
    movi.motoresDir();
  }
}
void Estrategia::desviarObs() {
  movi.girarDir();
  delay(290);
  movi.motoresParem(); 
  while(!sensor.pppp()){
    movi.motoresTras();
 }
  movi.motoresParem();
  while(sensor.ppbb()|| sensor.pppb()){
    robo.acionarMotores(0, 45);
 }  
  movi.motoresFrente();
  delay(900);
  movi.motoresEsq();
  delay(260);
  robo.acionarMotores(35,35);
  delay(1100);
  movi.motoresEsq();
  delay(220);
  while(sensor.bbbb()){
    movi.motoresFrente();
  }
  movi.motoresFrente();
  delay(200);
  movi.motoresDir();
  delay(300);
  movi.motoresTras();
  delay(90);
}
void Estrategia::redutor() {//teste
  robo.ligarLed(1);

  movi.superFrente();
  delay(300);
  
  movi.motoresTras();
  delay(250);
  
  movi.superFrente();
  delay(300);

  movi.motoresParem();
  delay(300);

  while(!sensor.bbbb()){
    movi.motoresFrente();
  }
  /*while (sensor.bbbb() || sensor.bbpp() || sensor.bbbp()) {
    movi.motoresTras();
    delay(150);
  }*/
  seguirLinha();
}
void Estrategia::executar() {
  if (sensor.viuObs()) {
    desviarObs();
  } else if (digitalRead(28) == LOW) {
    redutor(); 
  } else {
    seguirLinha();
  }
}
