#pragma once
#include "Fecha.h"

class Alquiler{
private:
int id;
Fecha fecha;
int id_cliente;
int id_vendedor;
char forma_pago;
bool envio;
string direccion_envio
Fecha fecha_devolucion;
float cargo_retraso;
int id_pelicula;
public:

    void setId(int i){id=i;}
    int getId(){return id;}

    void setIdCliente(int ic){id_cliente=ic;}
    int getIdCliente(){return id_cliente;}

    void cargar();
    void mostrar();

};
