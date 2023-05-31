#pragma once
#include "Reproductor.h"
class Radio : public Reproductor
{
public:
	Radio(string = "Radio", double = 0.0);
	virtual~Radio();
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
