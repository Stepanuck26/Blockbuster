#pragma once
#include "Fecha.h"
#include "Direccion.h"

class Alquiler{
private:
int id;
Fecha fecha;
int id_cliente;
int id_vendedor;
char forma_pago;
bool envio;
Direccion direccion_envio;
Fecha fecha_devolucion;
float cargo_retraso;
int id_pelicula;
public:

    void setId(int i){id=i;}
    int getId(){return id;}

    void setFecha(Fecha f){fecha=f;}
    Fecha getFecha(){return fecha;}

    void setIdCliente(int ic){id_cliente=ic;}
    int getIdCliente(){return id_cliente;}

    void setIdVendedor(int iv){id_vendedor=iv;}
    int getIdVendedor(){return id_vendedor;}

    void setFormaPago(char p){forma_pago=p;}
    char getFormaPago(){return forma_pago;}

    void setEnvio(bool e){envio=e;}
    bool getEnvio(){return envio;}

    void setDireccionEnvio(Direccion dir){direccion_envio=dir;}
    Direccion getDireccionEnvio(){return direccion_envio;}

    void fechaDevolucion(Fecha fd){fecha_devolucion=fd;}
    Fecha getFechaDevolucion(){return fecha_devolucion;}

    void setCargoRetraso(float c){cargo_retraso=c;}
    float getCargoRetraso(){return cargo_retraso;}

    void setIdPelicula(int ip){id_pelicula=ip;}
    int getIdPelicula(){return id_pelicula;}

    void cargar();
    void mostrar();

};
