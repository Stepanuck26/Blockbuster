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
    obj.cargar();
    obj.mostrar();
    cout << "Hello world!" << endl;
    return 0;
}
