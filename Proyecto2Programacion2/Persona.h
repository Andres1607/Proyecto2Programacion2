#pragma once
#include"Cliente.h"

class Persona : public Cliente {
private:
	string cedula;
	string correoE;
	string nacionalidad;
	string nombre;
public:
	Persona(string = "", string = "", string = "", string = "", string = "", string = "");
	virtual ~Persona();
	string obtenerNomPais();
	string obtenerCiudadU();
	string obtenerCedula();
	string obtenerCorreoE();
	string obtenerNacionalidad();
	string obtenerNombre();
	string toString();
};

