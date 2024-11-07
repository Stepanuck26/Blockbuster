#pragma once
#include <cstring>
#include "Persona.h"
#include "Direccion.h"


class Cliente:Persona{
private:
    Direccion domicilio;
    string telefono;
    string mail;
    string genero_favorito;
public:

    void setDireccion(Direccion d){domicilio=d;}
    Direccion getDireccion(){return domicilio;}

    void setTelefono(string t){telefono=t;}
    string getTelefono(){return telefono;}

    void setEmail(string e){mail=e;}
    string getEmail(){return mail;}

    void setGeneroFavorito(string g){genero_favorito=g;}
    string getGeneroFavorito(){return genero_favorito;}

    void cargar();
    void mostrar();
};
