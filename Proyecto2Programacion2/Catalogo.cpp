#include "Catalogo.h"

Catalogo::Catalogo()
{
    SisPreConfigurados = new ContList<Componente>();
}

Catalogo::~Catalogo()
{
}

string Catalogo::imprimir()
{
    stringstream s;
    if (SisPreConfigurados = NULL)
        s << SisPreConfigurados->imprimirObjs() << endl;
    return s.str();
}

void Catalogo::agregarSistemaPreconfigurado(Componente* sis)
{
    SisPreConfigurados->agregarObj(sis);
}

void Catalogo::eliminarComponenteEspecificoDelSistemaPre(Componente* sis)
{
    SisPreConfigurados->eliminarObjEspecif(sis);
}
