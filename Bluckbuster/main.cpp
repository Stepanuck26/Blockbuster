#include <iostream>
#include <cstdlib>

using namespace std;
#include "Fecha.h"
#include "Persona.h"
#include "Vendedor.h"
#include "Cliente.h"
int main()
{
    ///Persona obj;
    ///Vendedor obj;
    Cliente obj;
    Direccion k;
    k.cargar();
    obj.setDireccion(k);
    obj.mostrar();

    return 0;
}
