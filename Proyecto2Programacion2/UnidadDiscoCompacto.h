#pragma once
#include "Reproductor.h"
class UnidadDiscoCompacto : public Reproductor
{
public:
	UnidadDiscoCompacto(string = "", double = 0.0, string = "", string = "");
	virtual~UnidadDiscoCompacto();
	//To string
	string imprimir();
	//Get´s
	string obtenerNombre();
	double obtenerPrecio();
	string obtenerModelo();
	string obtenerCaracteristica();
	//Set´s
	void modificarNombre(string);
	void modificarPercio(double);
	void modificarModelo(string);
	void modificarCaracteristica(string);
	//Cont
	void agregarComponente(Componente*);
	void eliminarComponenteEspecifico(Componente*);
};




