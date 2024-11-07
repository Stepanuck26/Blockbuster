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

    void setNombres(string n){nombre=n;}
    string getNombres(){return nombre;}

    void setApellidos(string a){apellido=a;}
    string getApelldios(){return apellido;}

    void setFechaNacimiento(Fecha f){fechaNacimiento=f;}
    Fecha getFechaNacimiento(){return fechaNacimiento;}

    void cargar();
    void mostrar();
};

