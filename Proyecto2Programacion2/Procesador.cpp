#include "Procesador.h"

Procesador::Procesador(string nomP, string mod, string car, double pre) : Componente(pre), modelo(mod), caracteristica(car), nomProducto(nomP){}

Procesador::~Procesador(){}

string Procesador::imprimir() {
	stringstream s;
	s << "------------PROCESADOR--------------" << endl;
	s << "Componente:          " << nomProducto << endl;
	s << "Modelo:              " << modelo << endl;
	s << "Caracteristica:      " << caracteristica << endl;
	s << "Precio:              " << precio << endl;
	s << "-----------------------------------" << endl;
	return s.str();
}

double Procesador::obtenerPrecio() { return precio; }

string Procesador::obtenerModelo() { return modelo; }

string Procesador::obtenerCaracteristica() { return caracteristica; }

void Procesador::modificarNombre(string nomP) {nomProducto = nomP;}

void Procesador::modificarPrecio(double pre) { precio = pre; }

void Procesador::modificarModelo(string mod) { modelo = mod; }

void Procesador::modificarCaracteristica(string caract) { caracteristica = caract; }
