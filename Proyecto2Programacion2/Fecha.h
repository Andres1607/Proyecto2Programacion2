#pragma once
#include<iostream>
#include<sstream>

using namespace std;

class Fecha {
private:
	int dia;
	int anno;
	int mes;
public:
	Fecha(int = 0, int = 0, int = 0);
	virtual ~Fecha();
	string imprimir();
	int obtenerDia();
	int obtenerMes();
	int obtenerAnno();
	void modificarDia(int);
	void modificarMes(int);
	void modificarAnno(int);
};

