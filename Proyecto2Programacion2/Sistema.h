#pragma once
#include "Componente.h"
#include "ContList.h"
#include "Reproductor.h"
#include "Procesador.h"
#include "SalidaDeAudio.h"
class Sistema: public Componente
{
private:
	string cod;
	ContList<Componente>* sistema;
	Reproductor* proce;
	Procesador* rep;
	SalidaDeAudio* sAudio;
	//Componente* componente;
public:
	Sistema(string = "", string = "");
	virtual~Sistema();
	//Abstract Factory
	Reproductor* crearReproductor();
	Procesador* crearProcesador();
	SalidaDeAudio* crearSalidaDeAudio();
	//M.V.P
	//To string
	string imprimir();
	//Get´s
	string obtenerNombre();
	double obtenerPrecio();
	string obtenerModelo();
	string obtenerCaracteristica();
	string obtenerCodigoDelSietma();
	//Set´s
	void modificarNombre(string);
	void modificarPercio(double);
	void modificarModelo(string);
	void modificarCaracteristica(string);
	void modificarCodigoDelSistema(string);
	//Cont
	void agregarComponente(Componente*);
	void eliminarComponenteEspecifico(Componente*);
};

