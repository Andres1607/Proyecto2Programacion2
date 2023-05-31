#include "Persona.h"

Persona::Persona(string nom, string ced, string nac, string correo, string nomP, string cU) : Cliente(nomP, cU), cedula(ced), correoE(correo), nacionalidad(nac), nombre(nom) {}

Persona::~Persona() {}

string Persona::obtenerNomPais() { return nomPais; }

string Persona::obtenerCiudadU() { return ciudadU; }

string Persona::obtenerCedula() { return cedula; }

string Persona::obtenerCorreoE() { return correoE; }

string Persona::obtenerNacionalidad() { return nacionalidad; }

string Persona::obtenerNombre() { return nombre; }

string Persona::imprimir()
{
	stringstream s;
	s << "-------------CLIENTE-------------------" << endl;
	s << "-------------PERSONA-------------------" << endl;
	s << "Nombre:              " << nombre << endl;
	s << "Cedula:              " << cedula << endl;
	s << "Nacionalidad:        " << nacionalidad << endl;
	s << "Correo electronico:  " << correoE << endl;
	s << "Ciudad:              " << ciudadU << endl;
	s << "Pais:                " << nomPais << endl;
	s << "---------------------------------------" << endl;
	return s.str();
}

