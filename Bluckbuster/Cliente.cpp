#include <iostream>
#include <cstdlib>
#include <cstring>
#include "Cliente.h"
#include "Persona.h"
#include "Direccion.h"

void Cliente::cargar(){
    Persona::cargar();
    cin.ignore();
    domicilio.cargar();
    cin.ignore();
    cout<<"Ingrese su telefono: "<<endl;
    getline(cin,telefono);
    cout<<"Ingrese su mail: "<<endl;
    getline(cin, mail);
    cout<<"Ingrese su genero favorito: "<<endl;
    getline(cin,genero_favorito);
}

void Cliente::mostrar(){
    Persona::mostrar();
    domicilio.mostrar();
    cout<<"Telefono :"<<telefono<<endl;
    cout<<"Mail :"<<mail<<endl;
    cout<<"Genero favorito :"<<genero_favorito<<endl;

}
