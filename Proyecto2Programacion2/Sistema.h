#pragma once
#include "Componente.h"
#include "ContList.h"
class Sistema: public Componente
{
private:
	ContList<Componente>* sistema;
	Componente* componente;
public:
	Sistema();
	virtual~Sistema();
	//M.V.P
	//To string
	string imprimir();
	//Get´s
	string obtenerNombre() = 0;
	double obtenerPrecio() = 0;
	string obtenerModelo() = 0;
	string obtenerCaracteristica() = 0;
	//Set´s
	void modificarNombre(string) = 0;
	void modificarPercio(double) = 0;
	void modificarModelo(string) = 0;
	void modificarCaracteristica(string) = 0;
	//Cont
	void agregarComponente(Componente*) = 0;
	virtual void eliminarComponenteEspecifico(Componente*) = 0;
};

