#include "Parlante.h"

Parlante::Parlante(string nom, double precio): SalidaDeAudio(nom, precio)
{
}

Parlante::~Parlante()
{
}

string Parlante::toString()
{
    stringstream s;
    s << "Nomrbe:" << nom << '\t' << "precio: " << precio << endl;
    return s.str();
}

void Parlante::modificarnombre(string nom)
{
    this->nom = nom;
}

void Parlante::modificarPrecio(double precio)
{
    this->precio = precio;
}

string Parlante::obtenerNombre()
{
    return nom;
}

double Parlante::obtenerPrecio()
{
    return precio;
}
