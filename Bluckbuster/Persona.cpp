#include <iostream>
#include <cstdlib>
#include <cstring>
#include "Fecha.h"
#include "Persona.h"
using namespace std;

void Persona::cargar(){
    cout<<"Id ";
    cin>>id;
    cin.ignore();
    cout<<"Nombres ";
    getline(cin,nombre);
    cout<<"Apellidos ";
    getline(cin,apellido);
    cout<<"Fecha de nacimiento ";
    fechaNacimiento.cargar();
}
void Persona::mostrar(){
    cout<<"Id: "<<id<<endl;
    cout<<"Nombres: "<<nombre<<endl;
    cout<<"Apellidos: "<<apellido<<endl;
    cout<<"Fecha de nacimiento: ";
    fechaNacimiento.mostrar();
    cout<<endl;
}
