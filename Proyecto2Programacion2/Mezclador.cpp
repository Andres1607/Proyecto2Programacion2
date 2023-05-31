#include "Mezclador.h"

Mezclador::Mezclador(string nom, double precio):Procesador(nom, precio)
{
}

Mezclador::~Mezclador()
{
}

string Mezclador::toString()
{
    stringstream s;
    s << "Nomrbe:" << nom << '\t' << "precio: " << precio << endl;
    return s.str();
}

void Mezclador::modificarnombre(string nom)
{
    this->nom = nom;
}

void Mezclador::modificarPrecio(double precio)
{
    this->precio = precio;
}

string Mezclador::obtenerNombre()
{
    return nom;
}

double Mezclador::obtenerPrecio()
{
    return precio;
}
