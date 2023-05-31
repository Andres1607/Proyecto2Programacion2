#include "Tornamesa.h"

Tornamesa::Tornamesa(string nom, double precio): Reproductor(nom, precio)
{
}

Tornamesa::~Tornamesa()
{
}

string Tornamesa::toString()
{
    stringstream s;
    s << "Nomrbe:" << nom << '\t' << "precio: " << precio << endl;
    return s.str();
}

void Tornamesa::modificarnombre(string nom)
{
    this->nom = nom;
}

void Tornamesa::modificarPrecio(double precio)
{
    this->precio = precio;
}

string Tornamesa::obtenerNombre()
{
    return nom;
}

double Tornamesa::obtenerPrecio()
{
    return precio;
}
