#ifndef Blass_h
#define BLass_h

#include "Arduino.h"
#include "Blass.h"
#include <Modular.h>

//------------------------------------------------------
// Funciones para Entradas Analogicas
class Blass: public Modular{
  public:
    Blass (byte portMotIzq, byte potenciaMotIzq, byte portMotDer, byte potenciaMotDer, byte portPot);
    void  init();
    void  move(int orientacion);
    void  stop();
  private:
    byte  portMotorIzq;
    byte  potenciaMotorIzq;
    byte  portMotorDer;
    byte  potenciaMotorDer;
    byte  portPotciometro;
    byte  idCarlitto;
};

#endif