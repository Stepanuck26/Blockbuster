#include <iostream>
#include <cstdlib>
#include "Persona.h"
#include "Vendedor.h"
using namespace std;


void Vendedor::cargar(){
    Persona::cargar();
    cout<<"Ingrese el sueldo: "<<endl;
    cin>>sueldo;
    cout<<"Ingrese el ingreso: "<<endl;
    cin>>ingreso;
    cin.ignore();
    cout<<"Ingrese su telefono: "<<endl;
    getline(cin, telefono);
    cout<<"Ingrese su mail: "<<endl;
    getline(cin, mail);
}


void Vendedor::mostrar(){
    Persona::mostrar();
    cout<<"Sueldo: "<<sueldo<<endl;
    cout<<"Ingreso: "<<ingreso<<endl;
    cout<<"Telefono: "<<telefono<<endl;
    cout<<"Mail: "<<mail<<endl;

}
