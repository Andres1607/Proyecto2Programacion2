#include "Parlante.h"

Parlante::Parlante(string  nom, double pre, string  mod, string car) :SalidaDeAudio(nom, pre, mod, car)
{
}

Parlante::~Parlante()
{
}

string Parlante::imprimir()
{
	stringstream s;
	s << "Nombre: " << nombre << '\t' << "Precio: " << precio << '\t' << "Modelo: " << modelo << '\t' << "Caracteristica: " << caracteristica << endl;
	return s.str();
}

string Parlante::obtenerNombre()
{
	return nombre;
}

double Parlante::obtenerPrecio()
{
	return precio;
}

string Parlante::obtenerModelo()
{
	return modelo;
}

string Parlante::obtenerCaracteristica()
{
	return caracteristica;
}

string Parlante::obtenerCodigoDelSietma()
{
	return "";
}

void Parlante::modificarNombre(string nom)
{
	this->nombre = nom;
}

void Parlante::modificarPercio(double pre)
{
	this->precio = pre;
}

void Parlante::modificarModelo(string mod)
{
	this->modelo = mod;
}

void Parlante::modificarCaracteristica(string car)
{
	this->caracteristica = car;
}

void Parlante::modificarCodigoDelSistema(string)
{
}

void Parlante::agregarComponente(Componente*)
{
	throw new string("Ruta equivocada");
}

void Parlante::eliminarComponenteEspecifico(Componente*)
{
	throw new string("Ruta equivocada");
}