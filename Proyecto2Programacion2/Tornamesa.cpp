#include "Tornamesa.h"

Tornamesa::Tornamesa(string  nom, double pre, string  mod, string car):Reproductor(nom, pre, mod, car)
{
}

Tornamesa::~Tornamesa()
{
}

string Tornamesa::imprimir()
{
	stringstream s;
	s << "Nombre: " << nombre << '\t' << "Precio: " << precio << '\t' << "Modelo: " << modelo << '\t' << "Caracteristica: " << caracteristica << endl;
	return s.str();
}

string Tornamesa::obtenerNombre()
{
	return nombre;
}

double Tornamesa::obtenerPrecio()
{
	return precio;
}

string Tornamesa::obtenerModelo()
{
	return modelo;
}

string Tornamesa::obtenerCaracteristica()
{
	return caracteristica;
}

string Tornamesa::obtenerCodigoDelSietma()
{
	return "";
}

void Tornamesa::modificarNombre(string nom)
{
	this->nombre = nom;
}

void Tornamesa::modificarPercio(double pre)
{
	this->precio = pre;
}

void Tornamesa::modificarModelo(string mod)
{
	this->modelo = mod;
}

void Tornamesa::modificarCaracteristica(string car)
{
	this->caracteristica = car;
}

void Tornamesa::modificarCodigoDelSistema(string)
{
}

void Tornamesa::agregarComponente(Componente*)
{
	throw new string("Ruta equivocada");
}

void Tornamesa::eliminarComponenteEspecifico(Componente*)
{
	throw new string("Ruta equivocada");
}
