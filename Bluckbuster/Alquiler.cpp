#include <iostream>
#include <cstdlib>
using namespace std;
#include "Alquiler.h"

void Alquiler::cargar(){
    corte=true;
    int cantidad=0;
    Alquiler aq;
    do{
     cout<<"Id: "<<cantidad++<<endl;
     fecha.cargar();
     cout<<"Id cliente: "<<endl;
     cin>>id_cliente;
     cout<<"Id vendedor: "<<endl;
     cin>>id_vendedor;
     cout<<"Ingrese la forma de pago: B - Billeteras virtuales || T - Tarjetas || E - Efectivo"<<endl;
     cin>>forma_pago;
     cout<<"Envio: S - Si || N - No" <<endl;
     cin>>envio;

     }
    }while(corte=true);

    cout<<"Id:
}
