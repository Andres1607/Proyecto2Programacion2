#pragma once
#include "Reproductor.h"
class DispositivoBluetooth : public Reproductor
{
public:
	DispositivoBluetooth(string = "Dispositiv bluetooth", double = 0.0);
	virtual~DispositivoBluetooth();
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

