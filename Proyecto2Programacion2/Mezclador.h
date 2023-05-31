#pragma once
#include "Procesador.h"
class Mezclador : public Procesador
{
public:
	Mezclador(string = "", double = 0.0, string = "", string = "");
	virtual~Mezclador();
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

