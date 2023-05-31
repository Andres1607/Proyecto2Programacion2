#include "Radio.h"

Radio::Radio(string  nom, double pre, string  mod, string car) :Reproductor(nom, pre, mod, car)
{
}

Radio::~Radio()
{
}

string Radio::imprimir()
{
	stringstream s;
	s << "Nombre: " << nombre << '\t' << "Precio: " << precio << '\t' << "Modelo: " << modelo << '\t' << "Caracteristica: " << caracteristica << endl;
	return s.str();
}

string Radio::obtenerNombre()
{
	return nombre;
}

double Radio::obtenerPrecio()
{
	return precio;
}

string Radio::obtenerModelo()
{
	return modelo;
}

string Radio::obtenerCaracteristica()
{
	return caracteristica;
}

void Radio::modificarNombre(string nom)
{
	this->nombre = nom;
}

void Radio::modificarPercio(double pre)
{
	this->precio = pre;
}

void Radio::modificarModelo(string mod)
{
	this->modelo = mod;
}

void Radio::modificarCaracteristica(string car)
{
	this->caracteristica = car;
}

void Radio::agregarComponente(Componente*)
{
	throw new string("Ruta equivocada");
}

void Radio::eliminarComponenteEspecifico(Componente*)
{
	throw new string("Ruta equivocada");
}
