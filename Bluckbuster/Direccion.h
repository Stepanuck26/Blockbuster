#pragma once
#include <cstring>

class direccion{
private:
    string domicilio;
    int altura;
    string localidad;
    string codigo_postal;
    char casa;
    char departamento;
    int piso;
public:
    void setDomicilio(string d){domicilio=d;}
    string getDomicilio(){return domicilio;}

    void setAltura(int a){altura=a;}
    int getAlturaI(){return altura;}

    void setLocalidad(string l){localidad=l;}
    string getLocalidad(){return localidad;}

    void setCodigoPostal(string co){codigo_postal=co;}
    string getCodigoPostal(){return codigo_postal;}

    void setCasa(char c){casa=c;}
    char getCasa(){return casa;}

    void setDepartamento(char de){departamento=de;}
    char getDepartamento(){return departamento;}

    void setPiso(int p){piso=p;}
    int getPiso(){return piso;}

    void cargar();
    void mostrar();



};
