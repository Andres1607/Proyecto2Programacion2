#pragma once
#include <sstream>
#include <iostream>
using namespace std;

class Componente
{
protected:
	string nom;
	double precio;
public:
	Componente(string = "", double = 0.0);
	virtual~Componente();
	//To string
	virtual string toString() = 0;
	//Set´s
	virtual void modificarnombre(string) = 0;
	virtual void modificarPrecio (double) = 0;
	//Get´s
	virtual string obtenerNombre() = 0;
	virtual double obtenerPrecio() = 0;
};

