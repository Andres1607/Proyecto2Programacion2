#include "Mezclador.h"

Mezclador::Mezclador(string  nom, double pre, string  mod, string car) :Procesador(nom, pre, mod, car)
{
}

Mezclador::~Mezclador()
{
}

string Mezclador::imprimir()
{
	stringstream s;
	s << "Nombre: " << nombre << '\t' << "Precio: " << precio << '\t' << "Modelo: " << modelo << '\t' << "Caracteristica: " << caracteristica << endl;
	return s.str();
}

string Mezclador::obtenerNombre()
{
	return nombre;
}

double Mezclador::obtenerPrecio()
{
	return precio;
}

string Mezclador::obtenerModelo()
{
	return modelo;
}

string Mezclador::obtenerCaracteristica()
{
	return caracteristica;
}

string Mezclador::obtenerCodigoDelSietma()
{
	return "";
}

void Mezclador::modificarNombre(string nom)
{
	this->nombre = nom;
}

void Mezclador::modificarPercio(double pre)
{
	this->precio = pre;
}

void Mezclador::modificarModelo(string mod)
{
	this->modelo = mod;
}

void Mezclador::modificarCaracteristica(string car)
{
	this->caracteristica = car;
}

void Mezclador::modificarCodigoDelSistema(string)
{
}

void Mezclador::agregarComponente(Componente*)
{
	throw new string("Ruta equivocada");
}

void Mezclador::eliminarComponenteEspecifico(Componente*)
{
	throw new string("Ruta equivocada");
}
