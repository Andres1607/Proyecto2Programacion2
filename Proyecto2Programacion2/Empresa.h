#pragma once
#include"Cliente.h"

class Empresa : public Cliente {
private:
	string nomEmpresa;
	string cedJuridica;
public:
	Empresa(string = "", string = "", string = "", string = "");
	virtual ~Empresa();
	string obtenerNomPais();
	string obtenerCiudadU();
	string obtenerCedJuridica();
	string obtenerNomEmpresa();
	string imprimir();
};
