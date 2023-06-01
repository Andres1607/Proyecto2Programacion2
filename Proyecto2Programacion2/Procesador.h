#pragma once
#include "Componente.h"
class Procesador : public Componente
{
private:
	string modelo;
	string nomProducto;
	string caracteristica;
public:
	Procesador(string = "", string = "", string = "", double = 0.0);
	virtual~Procesador();
	//M.V.P
	//To string
	virtual string imprimir();
	//Get´s
	double obtenerPrecio();
	string obtenerModelo();
	string obtenerCaracteristica();
	//Set´s
	void modificarNombre(string);
	void modificarPrecio(double);
	void modificarModelo(string);
	virtual void modificarCaracteristica(string);
	
};


