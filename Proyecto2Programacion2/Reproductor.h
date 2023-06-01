#pragma once
#include "Componente.h"
class Reproductor : public Componente
{
private:
	string modelo;
	string nomProducto;
	string caracteristica;
public:
	Reproductor(string = "", string = "", string = "", double = 0.0);
	virtual~Reproductor();
	//M.V.P
	//To string
	virtual string imprimir();
	//Get´s
	double obtenerPrecio();
	string obtenerModelo();
	string obtenerCaracteristica();
	//Set´s
	void modificarNombre(string);
	void modificarPrecio(double);
	void modificarModelo(string);
	void modificarCaracteristica(string);
	void agregarComponente(Componente*);
	void eliminarComponenteEspecifico(Componente*);
};


