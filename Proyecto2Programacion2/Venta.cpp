#include "Fecha.h"

Fecha::Fecha(int d, int m, int a) :dia(d), mes(m), anno(a) { }

Fecha::~Fecha() {}

int Fecha::obtenerDia() { return dia; }

int Fecha::obtenerMes() { return mes; }

int Fecha::obtenerAnno() { return anno; }

void Fecha::modificarDia(int d) { dia = d; }

void Fecha::modificarAnno(int a) { anno = a; }

void Fecha::modificarMes(int m) { mes = m; }

string Fecha::imprimir() {
	stringstream x;
	x << "[" << dia << " / " << mes << " / " << anno << "]";
	return x.str();
}
