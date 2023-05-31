#include "Radio.h"

Radio::Radio(string nom, double precio): Reproductor(nom, precio)
{
}

Radio::~Radio()
{
}

string Radio::toString()
{
    stringstream s;
    s << "Nomrbe:" << nom << '\t' << "precio: " << precio << endl;
    return s.str();
}

void Radio::modificarnombre(string nom)
{
    this->nom = nom;
}

void Radio::modificarPrecio(double precio)
{
    this->precio = precio;
}

string Radio::obtenerNombre()
{
    return nom;
}

double Radio::obtenerPrecio()
{
    return precio;
}
