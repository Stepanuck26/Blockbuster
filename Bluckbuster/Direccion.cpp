#include <iostream>
#include <cstdlib>
#include <cstring>
#include "Direccion.h"

void direccion::cargar(){
cout<<"Ingrese el domicilio: "<<endl;
getline(cin, domicilio);
cout<<"Ingrese altura: "<<endl;
cin>>altura;
cin.ignore();
cout<<"Ingrese la localidad: "<<endl;
getline(cin,localidad);
cout<<"Ingrese el codigo postal: "<<endl;
getline(cin, codigo_postal);
cout<<"Casa: S - Si || N - No"<<endl;
cin>>casa;
if(casa=='N'){
    cout<<"Ingrese el departamento: "<<endl;
    cin>>departamento;
    cout<<"Ingrese el piso: "<<endl;
    cin>>piso;
}
}

void direcci
