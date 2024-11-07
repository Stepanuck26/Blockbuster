#pragma once
#include <cstring>

using namespace std;
#include "Persona.h"


class Vendedor:Persona{
private:
float sueldo;
float ingreso;
string telefono;
string mail;
public:

    void setSueldo(float s){sueldo=s;}
    float getSueldo(){return sueldo;}

    void setIngreso(float i){ingreso=i;}
    float getIngreso(){return ingreso;}

    void cargar();
    void mostrar();
};
