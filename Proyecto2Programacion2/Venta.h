#pragma once
#include"Fecha.h"
#include"Componente.h"
//#include"Catalogo.h"

class Venta {
private:
	Fecha* fech;
	Componente* producto;
	//Catalogo* catalogo;
public:
	Venta();
	virtual ~Venta();
	Fecha* obtenerFecha();
	Componente* obtenerComponente();
	void agregarProducto(Componente*);
	double ventaConGanancia();
	double ventaSinGanancia();
	//virtual void realizarVenta() = 0;
	virtual string imprimir() = 0;
};