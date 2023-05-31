#pragma once
#include "SalidaDeAudio.h"
class Parlante : public SalidaDeAudio
{
public:
	Parlante(string = "Parlante", double = 0.0);
	virtual~Parlante();
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

