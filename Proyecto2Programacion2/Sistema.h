#pragma once
#include "Componente.h"
#include "ContList.h"
#include "Reproductor.h"
#include "Procesador.h"
#include "SalidaDeAudio.h"
class Sistema: public Componente
{
private:
	string codigo;
	ContList<Componente>* sistema;
	Reproductor* reproductor;
	Procesador* procesador;
	SalidaDeAudio* salidaAudio;
public:
	Sistema(string = "");
	virtual~Sistema();
	//Abstract Factory
	Reproductor* crearReproductor();
	Procesador* crearProcesador();
	SalidaDeAudio* crearSalidaDeAudio();
	//M.V.P
	//To string
	string imprimir();
	//Get´s
	string obtenerCodSistema();
	double obtenerPreSistema();
	//Set´s
	void modificarCodigoDelSistema(string);
	//Cont
	void agregarComponente(Componente*);
	void eliminarComponenteEspecifico(Componente*);
};

