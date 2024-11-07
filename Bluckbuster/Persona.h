#pragma once
#include "Fecha.h"
using namespace std;
#include <cstring>
class Persona{
private:
int id;
string nombre;
string apellido;
Fecha fechaNacimiento;
public:
    int getId(){return id;}
    void setId(int d){id=d;}
    void cargar();
    void mostrar();
};

