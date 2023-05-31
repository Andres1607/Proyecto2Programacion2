#pragma once
#include "Procesador.h"
class Amplificador : public Procesador
{
public:
	Amplificador(string = "", double = 0.0, string = "", string = "");
	virtual~Amplificador();
	//To string
	string imprimir();
	//Get´s
	string obtenerNombre();
	double obtenerPrecio();
	string obtenerModelo();
	string obtenerCaracteristica();
	//Set´s
	void modificarNombre(string);
	void modificarPercio(double);
	void modificarModelo(string);
	void modificarCaracteristica(string);
	//Cont
	void agregarComponente(Componente*);
	void eliminarComponenteEspecifico(Componente*);
};
