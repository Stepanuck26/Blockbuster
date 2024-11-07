#pragma once

class Fecha{
private:
int dia,mes,anio;
public:

 void setDia(int d){dia=d;}
 int getDia(){return dia;}

 void setMes(int m){mes=m;}
 int getMes(){return mes;}

 void setAnio(int a){anio=a;}
 int getAnio(){return anio;}

 void cargar();
 void mostrar();
};
