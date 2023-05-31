#include "Sistema.h"

Sistema::Sistema(string nom, string cod) : Componente(nom)
{
    this->cod = cod;
    sistema = new ContList<Componente>();
}

Sistema::~Sistema()
{
}

string Sistema::imprimir()
{
    stringstream s;
    if (sistema != NULL)
        s << sistema->imprimirObjs() << endl;
    return s.str();
}

string Sistema::obtenerNombre()
{
    return "";
}

double Sistema::obtenerPrecio()
{
    return 0.0;
}

string Sistema::obtenerModelo()
{
    return "";
}

string Sistema::obtenerCaracteristica()
{
    return "";
}

string Sistema::obtenerCodigoDelSietma()
{
    return cod;
}

void Sistema::modificarNombre(string)
{
}

void Sistema::modificarPercio(double)
{
}

void Sistema::modificarModelo(string)
{
}

void Sistema::modificarCaracteristica(string)
{
}

void Sistema::modificarCodigoDelSistema(string cod)
{
    this->cod = cod;
}

void Sistema::agregarComponente(Componente* comp)
{
    sistema->agregarObj(comp);
}

void Sistema::eliminarComponenteEspecifico(Componente* comp)
{
    sistema->eliminarObjEspecif(comp);
}
