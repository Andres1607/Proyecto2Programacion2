#include "Amplificador.h"

Amplificador::Amplificador(string nom, double precio) :Procesador(nom, precio)
{
}

Amplificador::~Amplificador()
{
}

string Amplificador::toString()
{
    stringstream s;
    s << "Nomrbe:" << nom << '\t' << "precio: " << precio << endl;
    return s.str();
}

void Amplificador::modificarnombre(string nom)
{
    this->nom = nom;
}

void Amplificador::modificarPrecio(double precio)
{
    this->precio = precio;
}

string Amplificador::obtenerNombre()
{
    return nom;
}

double Amplificador::obtenerPrecio()
{
    return precio;
}
