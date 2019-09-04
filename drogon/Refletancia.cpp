#include "Refletancia.h"

float Refletancia::getPreto(){
  return preto;  
}
float Refletancia::getBranco(){
  return branco;
} 
float Refletancia::getCinza(){
  return cinza;
}
void Refletancia::setPreto(float preto){
  this -> preto = preto;
}
void Refletancia::setBranco(float branco){
  this -> branco = branco;
}
void Refletancia::setCinza(float preto, float branco){
  cinza = (preto + branco)/2;
}
void Refletancia::setCinza(int cinza){
  this -> cinza = cinza;
}