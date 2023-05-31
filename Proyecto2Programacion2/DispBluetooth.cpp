#include "DispBluetooth.h"

DispBluetooth::DispBluetooth(string  nom, double pre, string  mod, string car) :Reproductor(nom, pre, mod, car)
{
}

DispBluetooth::~DispBluetooth()
{
}

string DispBluetooth::imprimir()
{
	stringstream s;
	s << "Nombre: " << nombre << '\t' << "Precio: " << precio << '\t' << "Modelo: " << modelo << '\t' << "Caracteristica: " << caracteristica << endl;
	return s.str();
}

string DispBluetooth::obtenerNombre()
{
	return nombre;
}

double DispBluetooth::obtenerPrecio()
{
	return precio;
}

string DispBluetooth::obtenerModelo()
{
	return modelo;
}

string DispBluetooth::obtenerCaracteristica()
{
	return caracteristica;
}

void DispBluetooth::modificarNombre(string nom)
{
	this->nombre = nom;
}

void DispBluetooth::modificarPercio(double pre)
{
	this->precio = pre;
}

void DispBluetooth::modificarModelo(string mod)
{
	this->modelo = mod;
}

void DispBluetooth::modificarCaracteristica(string car)
{
	this->caracteristica = car;
}

void DispBluetooth::agregarComponente(Componente*)
{
	throw new string("Ruta equivocada");
}

void DispBluetooth::eliminarComponenteEspecifico(Componente*)
{
	throw new string("Ruta equivocada");
}
