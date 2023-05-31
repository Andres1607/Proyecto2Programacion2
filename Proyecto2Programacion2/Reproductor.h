#pragma once
#include "Componente.h"
class Reproductor: public Componente
{
public:
	Reproductor(string = "", double = 0.0);
	virtual~Reproductor();
	//M.V.P
	//To string
	virtual string toString() = 0;
	//Set�s
	virtual void modificarnombre(string) = 0;
	virtual void modificarPrecio(double) = 0;
	//Get�s
	virtual string obtenerNombre() = 0;
	virtual double obtenerPrecio() = 0;
};
