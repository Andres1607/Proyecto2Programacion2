#include "Empresa.h"

Empresa::Empresa(string nomE, string cedJ, string nomP, string cU) :Cliente(nomP, cU), nomEmpresa(nomE), cedJuridica(cedJ) {}

Empresa::~Empresa() {}

string Empresa::obtenerNomPais() { return nomPais; }

string Empresa::obtenerCiudadU() { return ciudadU; }

string Empresa::obtenerCedJuridica() { return cedJuridica; }

string Empresa::obtenerNomEmpresa() { return nomEmpresa; }

string Empresa::imprimir()
{
	stringstream s;
	s << "-------------CLIENTE-------------------" << endl;
	s << "-------------Empresa-------------------" << endl;
	s << "Nombre Empresa:           " << nomEmpresa << endl;
	s << "Cedula Juridica:          " << cedJuridica << endl;
	s << "Ciudad:                   " << ciudadU << endl;
	s << "Pais:                     " << nomPais << endl;
	s << "---------------------------------------" << endl;
	return s.str();
}
