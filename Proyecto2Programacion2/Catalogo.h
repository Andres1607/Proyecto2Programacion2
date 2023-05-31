#pragma once
#include "Componente.h"
#include "ContList.h"
#include "Sistema.h"
class Catalogo
{
private:
	ContList<Componente>* SisPreConfigurados;
public:
	Catalogo();
	virtual~Catalogo();
	//To string
	string imprimir();
	//Templates
	void agregarSistemaPreconfigurado(Componente*);
	void eliminarComponenteEspecificoDelSistemaPre(Componente*);

};

