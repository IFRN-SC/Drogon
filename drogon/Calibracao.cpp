#include "Calibracao.h"

void Calibracao::tempo(){

  Serial.println(F("Pressione C para calibrar"));
  Serial.println(F("Espere para não calibrar"));

  while(!Serial.available()){
    delay(10);
    contadorWhile += 10;
    if(contadorWhile >= 3500) { 
      break; 
      }
  }

  resposta = Serial.read();

  if(resposta == 'C' || resposta == 'c'){
      calibrar();

     Serial.println(F("Acabou"));
  }
  
  robo.lerCalibracao(cali);

  dir.setCinza(cali.refletanciaDir);
  maisDir.setCinza(cali.refletanciaMaisDir);
  esq.setCinza(cali.refletanciaEsq);
  maisEsq.setCinza(cali.refletanciaMaisEsq);

  
  Serial.print(maisEsq.getCinza());
  Serial.print(F("\t --- \t"));
  Serial.print(esq.getCinza());
  Serial.print(F("\t --- \t"));
  Serial.print(dir.getCinza());
  Serial.print(F("\t --- \t"));
  Serial.print(maisDir.getCinza());
  Serial.println(F(" Média"));
}

void Calibracao::calibrar(){

    Serial.print(F("Entrou na calibração"));
    
    limparTela();

    while(resposta != 'S' || resposta != 's'){
    
            Serial.println(F("Vc quer ter os valores do preto ou do branco? P/B"));
            Serial.println(F("Pressione S para sair"));
            Serial.println(F(""));

            while(!Serial.available()){}
            valorCores = Serial.read();
            
            if(valorCores == 'P' || valorCores == 'p'){
                Serial.println(F("Entrou no preto"));
                calibrarPreto();
            }else if(valorCores == 'B' ||  valorCores == 'b'){
               Serial.println(F("Entrou no branco"));
               calibrarBranco();
            }else if(valorCores == 'S' || valorCores == 's'){
              resposta = 'S';
              valorCorte();

              Serial.print(maisEsq.getCinza());
              Serial.print(F("\t --- \t"));
              Serial.print(esq.getCinza());
              Serial.print(F("\t --- \t"));
              Serial.print(dir.getCinza());
              Serial.print(F("\t --- \t"));
              Serial.print(maisDir.getCinza());
              Serial.println(F(" Média"));

              cali.refletanciaDir = dir.getCinza() ;
              cali.refletanciaMaisDir = maisDir.getCinza();
              cali.refletanciaEsq = esq.getCinza();
              cali.refletanciaMaisEsq = maisEsq.getCinza();

              robo.salvarCalibracao(cali);
                        
            }
    }   

}  

void Calibracao::calibrarPreto(){ 
    limparTela();
    
    pretoMaisEsq = robo.lerSensorLinhaMaisEsq();
    pretoEsq = robo.lerSensorLinhaEsq();
    pretoMaisDir = robo.lerSensorLinhaMaisDir();
    pretoDir = robo.lerSensorLinhaDir();

    for(int i = 1; i <= 9; i++){
        pretoMaisEsq = (pretoMaisEsq + robo.lerSensorLinhaMaisEsq())/2;
        pretoEsq = (pretoEsq + robo.lerSensorLinhaEsq())/2;
        pretoMaisDir = (pretoMaisDir + robo.lerSensorLinhaMaisDir())/2;
        pretoDir = (pretoDir + robo.lerSensorLinhaDir())/2;
    }

    maisEsq.setPreto(pretoMaisEsq);
    esq.setPreto(pretoEsq);
    maisDir.setPreto(pretoMaisDir);
    dir.setPreto(pretoDir);

    Serial.print(maisEsq.getPreto());
    Serial.print(F("\t --- \t"));
    Serial.print(esq.getPreto());
    Serial.print(F("\t --- \t"));
    Serial.print(dir.getPreto());
    Serial.print(F("\t --- \t"));
    Serial.print(maisDir.getPreto());
    Serial.println(F(" Preto"));

    for(int led=1; led<=3; led++){
    robo.desligarLed(led);
    }
}
void Calibracao::calibrarBranco(){
    limparTela();
    
    brancoMaisEsq = robo.lerSensorLinhaMaisEsq();
    brancoEsq = robo.lerSensorLinhaEsq();
    brancoMaisDir = robo.lerSensorLinhaMaisDir();
    brancoDir = robo.lerSensorLinhaDir();

    for(int i = 1; i <= 9; i++){

      brancoMaisEsq = (brancoMaisEsq + robo.lerSensorLinhaMaisEsq())/2;
      brancoEsq = (brancoEsq + robo.lerSensorLinhaEsq())/2;
      brancoMaisDir = (brancoMaisDir + robo.lerSensorLinhaMaisDir())/2;
      brancoDir = (brancoDir + robo.lerSensorLinhaDir())/2;

      delay(100);      
    }
    
    maisEsq.setBranco(brancoMaisEsq);
    esq.setBranco(brancoEsq);
    maisDir.setBranco(brancoMaisDir);
    dir.setBranco(brancoDir);

    Serial.print(maisEsq.getBranco());
    Serial.print("\t --- \t");
    Serial.print(esq.getBranco());
    Serial.print("\t --- \t");
    Serial.print(dir.getBranco());
    Serial.print("\t --- \t");
    Serial.print(maisDir.getBranco());
    Serial.println(" Branco");

    for(int led=1; led<=3; led++){
    robo.desligarLed(led);
    }
}
void Calibracao::valorCorte(){
    maisEsq.setCinza(maisEsq.getPreto(), maisEsq.getBranco());
    esq.setCinza(esq.getPreto(), esq.getBranco());
    maisDir.setCinza(maisDir.getPreto(), maisDir.getBranco());
    dir.setCinza(dir.getPreto(), dir.getBranco());
}
void Calibracao::mostrarValores(){
  float sensorMaisEsq = robo.lerSensorLinhaMaisEsq();
  float sensorEsq = robo.lerSensorLinhaEsq();
  float sensorMaisDir = robo.lerSensorLinhaMaisDir();
  float sensorDir = robo.lerSensorLinhaDir();

  Serial.print("Valor dos sensores: +esq:     esq:     dir:     +dir:");
  Serial.print(F("                     "));
  Serial.print(sensorMaisEsq);
  Serial.print(F("      "));
  Serial.print(sensorEsq);
  Serial.print(F("      "));
  Serial.print(sensorMaisDir);
  Serial.print(F("      "));

  delay(250);
}
void Calibracao::limparTela(){
  for(int i = 1; i <= 49; i++){
    Serial.println(F(""));
  }
}
