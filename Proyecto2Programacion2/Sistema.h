#pragma once
#include "Componente.h"
#include "ContList.h"
class Sistema: public Componente
{
private:
	string cod;
	ContList<Componente>* sistema;
	Componente* componente;
public:
	Sistema(string = "", string = "");
	virtual~Sistema();
	//M.V.P
	//To string
	string imprimir();
	//Get´s
	string obtenerNombre();
	double obtenerPrecio();
	string obtenerModelo();
	string obtenerCaracteristica();
	string obtenerCodigoDelSietma();
	//Set´s
	void modificarNombre(string);
	void modificarPercio(double);
	void modificarModelo(string);
	void modificarCaracteristica(string);
	void modificarCodigoDelSistema(string);
	//Cont
	void agregarComponente(Componente*);
	void eliminarComponenteEspecifico(Componente*);
};

