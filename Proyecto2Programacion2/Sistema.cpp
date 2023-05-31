#include "Sistema.h"

Sistema::Sistema(string nom, string cod) : Componente(nom)
{
    this->cod = cod;
    sistema = new ContList<Componente>();
}

Sistema::~Sistema()
{
}

Reproductor* Sistema::crearReproductor()
{
    //return Interfaz::CrearReproductor();
    return NULL;//Por el momento
}

Procesador* Sistema::crearProcesador()
{
    //return Interfaz::CrearProsesador();
    return NULL;//Por el momento
}

SalidaDeAudio* Sistema::crearSalidaDeAudio()
{
    //return Interfaz::CrearSalidaDeAudio();
    return NULL;//Por el momento
}

string Sistema::imprimir()
{
    stringstream s;
    s << "Nombre del sistema: " << nombre << endl
        << "Codigo: " << cod << endl
        << "------------------LISTADO COMPONENTES------------------" << endl;
    if (sistema != NULL)
        s << sistema->imprimirObjs();
    s << "-------------------------------------------------------" << endl;
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
