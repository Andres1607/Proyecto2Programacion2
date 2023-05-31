#include "Amplificador.h"

Amplificador::Amplificador(string  nom, double pre, string  mod, string car) :Procesador(nom, pre, mod, car)
{
}

Amplificador::~Amplificador()
{
}

string Amplificador::imprimir()
{
	stringstream s;
	s << "Nombre: " << nombre << '\t' << "Precio: " << precio << '\t' << "Modelo: " << modelo << '\t' << "Caracteristica: " << caracteristica << endl;
	return s.str();
}

string Amplificador::obtenerNombre()
{
	return nombre;
}

double Amplificador::obtenerPrecio()
{
	return precio;
}

string Amplificador::obtenerModelo()
{
	return modelo;
}

string Amplificador::obtenerCaracteristica()
{
	return caracteristica;
}

string Amplificador::obtenerCodigoDelSietma()
{
	return "";
}

void Amplificador::modificarNombre(string nom)
{
	this->nombre = nom;
}

void Amplificador::modificarPercio(double pre)
{
	this->precio = pre;
}

void Amplificador::modificarModelo(string mod)
{
	this->modelo = mod;
}

void Amplificador::modificarCaracteristica(string car)
{
	this->caracteristica = car;
}

void Amplificador::modificarCodigoDelSistema(string)
{
}

void Amplificador::agregarComponente(Componente*)
{
	throw new string("Ruta equivocada");
}

void Amplificador::eliminarComponenteEspecifico(Componente*)
{
	throw new string("Ruta equivocada");
}
