#include "Reproductor.h"

Reproductor::Reproductor(string nomP, string mod, string car, double pre) : Componente(pre), modelo(mod), caracteristica(car), nomProducto(nomP) {}

Reproductor::~Reproductor() {}

string Reproductor::imprimir() {
	stringstream s;
	s << "------------REPRODUCTOR--------------" << endl;
	s << "Componente:          " << nomProducto << endl;
	s << "Modelo:              " << modelo << endl;
	s << "Caracteristica:      " << caracteristica << endl;
	s << "Precio:              " << precio << endl;
	s << "-----------------------------------" << endl;
	return s.str();
}

double Reproductor::obtenerPrecio() { return precio; }

string Reproductor::obtenerModelo() { return modelo; }

string Reproductor::obtenerCaracteristica() { return caracteristica; }

void Reproductor::modificarNombre(string nomP) { nomProducto = nomP; }

void Reproductor::modificarPrecio(double pre) { precio = pre; }

void Reproductor::modificarModelo(string mod) { modelo = mod; }

void Reproductor::modificarCaracteristica(string caract) { caracteristica = caract; }