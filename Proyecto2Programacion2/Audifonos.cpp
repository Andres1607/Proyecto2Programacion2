#include "Audifonos.h"

Audifonos::Audifonos(string nom, double precio) : SalidaDeAudio(nom, precio)
{
}

Audifonos::~Audifonos()
{
}

string Audifonos::toString()
{
    stringstream s;
    s << "Nomrbe:" << nom << '\t' << "precio: " << precio << endl;
    return s.str();
}

void Audifonos::modificarnombre(string nom)
{
    this->nom = nom;
}

void Audifonos::modificarPrecio(double precio)
{
    this->precio = precio;
}

string Audifonos::obtenerNombre()
{
    return nom;
}

double Audifonos::obtenerPrecio()
{
    return precio;
}
