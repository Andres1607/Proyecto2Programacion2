#pragma once
#include "Reproductor.h"
class UnidadDiscoCompacto : public Reproductor
{
public:
	UnidadDiscoCompacto(string = "Unidad disco compacto", double = 0.0);
	virtual~UnidadDiscoCompacto();
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

