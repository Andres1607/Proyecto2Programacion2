#pragma once
#include "SalidaDeAudio.h"
class Audifonos : public SalidaDeAudio
{
public:
	Audifonos(string = "Audifonos", double = 0.0);
	virtual~Audifonos();
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