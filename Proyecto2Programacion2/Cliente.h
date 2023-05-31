#pragma once
#include<iostream>
#include<sstream>

using namespace std;

class Cliente {
protected:
	string nomPais;
	string ciudadU;
public:
	Cliente(string = 0, string = 0);
	virtual ~Cliente();
	virtual string toString() = 0;
	virtual string obtenerNomPais() = 0;
	virtual string obtenerCiudadU() = 0;
};
