#pragma once
#include "Procesador.h"
class Mezclador : public Procesador
{
public:
	Mezclador(string = "Mezclador", double = 0.0);
	virtual~Mezclador();
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