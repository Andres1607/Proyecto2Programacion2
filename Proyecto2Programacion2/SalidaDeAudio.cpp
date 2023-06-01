#include "SalidaDeAudio.h"

SalidaDeAudio::SalidaDeAudio(string nomP, string mod, string car, double pre) : Componente(pre), modelo(mod), caracteristica(car), nomProducto(nomP) {}

SalidaDeAudio::~SalidaDeAudio() {}

string SalidaDeAudio::imprimir() {
	stringstream s;
	s << "------------SALIDA DE AUDIO--------------" << endl;
	s << "Componente:          " << nomProducto << endl;
	s << "Modelo:              " << modelo << endl;
	s << "Caracteristica:      " << caracteristica << endl;
	s << "Precio:              " << precio << endl;
	s << "----------------------------------------" << endl;
	return s.str();
}

double SalidaDeAudio::obtenerPrecio() { return precio; }

string SalidaDeAudio::obtenerModelo() { return modelo; }

string SalidaDeAudio::obtenerCaracteristica() { return caracteristica; }

void SalidaDeAudio::modificarNombre(string nomP) { nomProducto = nomP; }

void SalidaDeAudio::modificarPrecio(double pre) { precio = pre; }

void SalidaDeAudio::modificarModelo(string mod) { modelo = mod; }

void SalidaDeAudio::modificarCaracteristica(string caract) { caracteristica = caract; }

void SalidaDeAudio::agregarComponente(Componente*)
{
	throw new string("Ruta equivocada");
}

void SalidaDeAudio::eliminarComponenteEspecifico(Componente*)
{
	throw new string("Ruta equivocada");
}
