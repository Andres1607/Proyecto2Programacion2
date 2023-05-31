#pragma once
#include "Reproductor.h"
class Radio : public Reproductor
{
public:
	Radio(string = "", double = 0.0, string = "", string = "");
	virtual~Radio();
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


