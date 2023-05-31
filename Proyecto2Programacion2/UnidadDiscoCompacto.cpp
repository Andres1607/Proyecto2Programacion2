#include "UnidadDiscoCompacto.h"
UnidadDiscoCompacto::UnidadDiscoCompacto(string nom, double precio) : Reproductor(nom, precio)
{
}

UnidadDiscoCompacto::~UnidadDiscoCompacto()
{
}

string UnidadDiscoCompacto::toString()
{
    stringstream s;
    s << "Nomrbe:" << nom << '\t' << "precio: " << precio << endl;
    return s.str();
}

void UnidadDiscoCompacto::modificarnombre(string nom)
{
    this->nom = nom;
}

void UnidadDiscoCompacto::modificarPrecio(double precio)
{
    this->precio = precio;
}

string UnidadDiscoCompacto::obtenerNombre()
{
    return nom;
}

double UnidadDiscoCompacto::obtenerPrecio()
{
    return precio;
}
