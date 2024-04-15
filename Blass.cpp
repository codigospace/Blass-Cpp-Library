#include "Blass.h"
#include <Modular.h>

//---------------------------------------------------------------------------------------
// Funciones para Entradas Analogicas
// It is funcionally correct
Blass::Blass (byte portMotIzq, byte potenciaMotIzq, byte portMotorDer, byte potenciaMotDer, byte portPot){
  portMotorIzq =   portMotIzq;
  potenciaMotorIzq =   potenciaMotIzq;
  portMotorDer =   portMotDer;
  potenciaMotorDer =   potenciaMotDer;
  portPotenciometro =   portPot;
}
void Blass::init(){
}
void Blass::move(int orientacion){
}
void Blass::stop(){
}


