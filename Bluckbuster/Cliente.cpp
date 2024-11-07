#include <iostream>
#include <cstdlib>
#include <cstring>
#include "Cliente.h"

void Cliente::cargar(){
    Persona::cargar();
    cin.ignore();
    cout<<"Ingrese el domicilio: "<<endl;
    getline(cin,domicilio);
    cout<<"Ingrese su telefono: "<<endl;
    getline(cin,telefono);
    cout<<"Ingrese su mail: "<<endl;
    getline(cin, mail);
    cout<<"Ingrese su genero favorito: "<<endl;
    getline(cin,genero_favorito);
}

void Cliente::mostrar(){
    Persona::mostrar();
    cout<<"Domicilio :"<<domicilio<<endl;
    cout<<"Telefono :"<<telefono<<endl;
    cout<<"Mail :"<<mail<<endl;
    cout<<"Genero favorito :"<<genero_favorito<<endl;

}
