#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class Componente
{
protected:
	string nombre;
	double precio;
public:
	Componente(string =  "", double = 0.0);
	virtual~Componente();
	//M.V.P
	//To string
	virtual string imprimir() = 0;
	//Get�s
	virtual string obtenerNombre() = 0;
	virtual double obtenerPrecio() = 0;
	virtual string obtenerModelo() = 0;
	virtual string obtenerCaracteristica() = 0;
	virtual string obtenerCodigoDelSietma() = 0;
	virtual void modificarCodigoDelSistema(string) = 0;
	//Set�s
	virtual void modificarNombre(string) = 0;
	virtual void modificarPercio(double) = 0;
	virtual void modificarModelo(string) = 0;
	virtual void modificarCaracteristica(string) = 0;
	//Cont
	virtual void agregarComponente(Componente*) = 0;
	virtual void eliminarComponenteEspecifico(Componente*) = 0;
};

