#include "Audifonos.h"

Audifonos::Audifonos(string  nom, double pre, string  mod, string car) :SalidaDeAudio(nom, pre, mod, car)
{
}

Audifonos::~Audifonos()
{
}

string Audifonos::imprimir()
{
	stringstream s;
	s << "Nombre: " << nombre << '\t' << "Precio: " << precio << '\t' << "Modelo: " << modelo << '\t' << "Caracteristica: " << caracteristica << endl;
	return s.str();
}

string Audifonos::obtenerNombre()
{
	return nombre;
}

double Audifonos::obtenerPrecio()
{
	return precio;
}

string Audifonos::obtenerModelo()
{
	return modelo;
}

string Audifonos::obtenerCaracteristica()
{
	return caracteristica;
}

void Audifonos::modificarNombre(string nom)
{
	this->nombre = nom;
}

void Audifonos::modificarPercio(double pre)
{
	this->precio = pre;
}

void Audifonos::modificarModelo(string mod)
{
	this->modelo = mod;
}

void Audifonos::modificarCaracteristica(string car)
{
	this->caracteristica = car;
}

void Audifonos::agregarComponente(Componente*)
{
	throw new string("Ruta equivocada");
}

void Audifonos::eliminarComponenteEspecifico(Componente*)
{
	throw new string("Ruta equivocada");
}