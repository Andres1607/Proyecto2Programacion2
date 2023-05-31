#pragma once
#include "Reproductor.h"
class Tornamesa : public Reproductor
{
public:
	Tornamesa(string = "Tornamesa", double = 0.0);
	virtual~Tornamesa();
	//M.V.P
	//To string
	string toString();
	//Set´s
	void modificarnombre(string);
	void modificarPrecio(double);
	//Get´s
	string obtenerNombre();
	double obtenerPrecio();
};

