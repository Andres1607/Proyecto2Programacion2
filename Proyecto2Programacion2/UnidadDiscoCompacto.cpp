#include "UnidadDiscoCompacto.h"

UnidadDiscoCompacto::UnidadDiscoCompacto(string  nom, double pre, string  mod, string car) :Reproductor(nom, pre, mod, car)
{
}

UnidadDiscoCompacto::~UnidadDiscoCompacto()
{
}

string UnidadDiscoCompacto::imprimir()
{
	stringstream s;
	s << "Nombre: " << nombre << '\t' << "Precio: " << precio << '\t' << "Modelo: " << modelo << '\t' << "Caracteristica: " << caracteristica << endl;
	return s.str();
}

string UnidadDiscoCompacto::obtenerNombre()
{
	return nombre;
}

double UnidadDiscoCompacto::obtenerPrecio()
{
	return precio;
}

string UnidadDiscoCompacto::obtenerModelo()
{
	return modelo;
}

string UnidadDiscoCompacto::obtenerCaracteristica()
{
	return caracteristica;
}

void UnidadDiscoCompacto::modificarNombre(string nom)
{
	this->nombre = nom;
}

void UnidadDiscoCompacto::modificarPercio(double pre)
{
	this->precio = pre;
}

void UnidadDiscoCompacto::modificarModelo(string mod)
{
	this->modelo = mod;
}

void UnidadDiscoCompacto::modificarCaracteristica(string car)
{
	this->caracteristica = car;
}

void UnidadDiscoCompacto::agregarComponente(Componente*)
{
	throw new string("Ruta equivocada");
}

void UnidadDiscoCompacto::eliminarComponenteEspecifico(Componente*)
{
	throw new string("Ruta equivocada");
}
