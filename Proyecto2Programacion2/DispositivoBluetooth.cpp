#include "DispositivoBluetooth.h"

DispositivoBluetooth::DispositivoBluetooth(string nom, double precio) : Reproductor(nom, precio)
{
}

DispositivoBluetooth::~DispositivoBluetooth()
{
}

string DispositivoBluetooth::toString()
{
    stringstream s;
    s << "Nomrbe:" << nom << '\t' << "precio: " << precio << endl;
    return s.str();
}

void DispositivoBluetooth::modificarnombre(string nom)
{
    this->nom = nom;
}

void DispositivoBluetooth::modificarPrecio(double precio)
{
    this->precio = precio;
}

string DispositivoBluetooth::obtenerNombre()
{
    return nom;
}

double DispositivoBluetooth::obtenerPrecio()
{
    return precio;
}
