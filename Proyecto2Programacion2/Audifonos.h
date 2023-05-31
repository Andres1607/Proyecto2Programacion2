#pragma once
#include "SalidaDeAudio.h"
class Audifonos : public SalidaDeAudio
{
public:
	Audifonos(string = "", double = 0.0, string = "", string = "");
	virtual~Audifonos();
	//To string
	string imprimir();
	//Get�s
	string obtenerNombre();
	double obtenerPrecio();
	string obtenerModelo();
	string obtenerCaracteristica();
	//Set�s
	void modificarNombre(string);
	void modificarPercio(double);
	void modificarModelo(string);
	void modificarCaracteristica(string);
	//Cont
	void agregarComponente(Componente*);
	void eliminarComponenteEspecifico(Componente*);
};


