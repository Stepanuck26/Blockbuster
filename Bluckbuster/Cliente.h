#pragma once
#include <cstring>
#include "Persona.h"


class Cliente:Persona{
private:
    string domicilio;
    string telefono;
    string mail;
    string genero_favorito;
public:
    void cargar();
    void mostrar();
};
