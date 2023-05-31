#include "Procesador.h"

Procesador::Procesador(string nom, double pre, string mod, string car): Componente(nom, pre), modelo(mod), caracteristica(car)
{
}

Procesador::~Procesador()
{
}
