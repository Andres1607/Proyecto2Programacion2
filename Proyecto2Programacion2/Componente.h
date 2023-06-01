#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class Componente
{
protected:
	double precio;
public:
	Componente(double = 0.0);
	virtual~Componente();
	//M.V.P
	//To string
	virtual string imprimir() = 0;
	//Get´s
	virtual double obtenerPrecio() = 0;
	//Set´s
	virtual void modificarPercio(double) = 0;
	//Cont
	virtual void agregarComponente(Componente*) = 0;
	virtual void eliminarComponenteEspecifico(Componente*) = 0;
};

