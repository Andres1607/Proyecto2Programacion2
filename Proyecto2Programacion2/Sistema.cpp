#include "Sistema.h"

Sistema::Sistema(string cod) : codigo(cod) {
    sistema = new ContList<Componente>();
    reproductor = crearReproductor();
    procesador = crearProcesador();
    salidaAudio = crearSalidaDeAudio();

    agregarComponente(reproductor);
    agregarComponente(procesador);
    agregarComponente(salidaAudio);
}

Sistema::~Sistema(){}

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
    s << "----------------SISTEMA---------------------" << endl;
    s << "Codigo:       " << codigo << endl;
    s << "------------------LISTADO COMPONENTES------------------" << endl;
    if (sistema != NULL)
        s << sistema->imprimirObjs();
    s << "-------------------------------------------------------" << endl;
    return s.str();
}

string Sistema::obtenerCodSistema(){return codigo;}

double Sistema::obtenerPreSistema(){ 
    return sistema->obtenerPrecio();
}

void Sistema::modificarCodigoDelSistema(string cod) {codigo = cod;}

void Sistema::agregarComponente(Componente* comp) {
    sistema->agregarObj(comp);
}

void Sistema::eliminarComponenteEspecifico(Componente* comp){
    sistema->eliminarObjEspecif(comp);
}
