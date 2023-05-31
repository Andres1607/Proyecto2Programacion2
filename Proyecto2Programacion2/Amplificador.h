#pragma once
#include "Procesador.h"
class Amplificador : public Procesador
{
public:
	Amplificador(string = "Amplificador", double = 0.0);
	virtual~Amplificador();
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