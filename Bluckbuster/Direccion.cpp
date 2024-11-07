#include <iostream>
#include <cstdlib>
#include <cstring>
#include "Direccion.h"

void Direccion::cargar(){
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
}else{
    departamento='N';
    piso=0;
}
}

void Direccion::mostrar(){
    cout<<"Domicilio: "<<domicilio<<endl;
    cout<<"Altura: "<<altura<<endl;
    cout<<"Localidad: "<<localidad<<endl;
    cout<<"Codigo postal: "<<codigo_postal<<endl;
    if(casa=='N'){
        cout<<"Departamento: "<<departamento<<endl;
        cout<<"Piso: "<<piso<<endl;
    }else{
    cout<<"Casa"<<endl;
    }
}
