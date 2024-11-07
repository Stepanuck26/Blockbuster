#include <iostream>
#include <cstdlib>
using namespace std;
#include "Fecha.h"


void Fecha::cargar(){
    cout<<"Dia: "<<endl;
    cin>>dia;
    cout<<"Mes: "<<endl;
    cin>>mes;
    cout<<"Anio: "<<endl;
    cin>>anio;
}

void Fecha::mostrar(){
    cout<<dia<<"/"<<mes<<"/"<<anio;
}
