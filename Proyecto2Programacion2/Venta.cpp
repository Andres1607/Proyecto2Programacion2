#include"Venta.h"

Venta::Venta() {
	fech = new Fecha();
	producto = NULL;
	//Catalogo = new Catalogo();
}

Venta::~Venta() {}

Fecha* Venta::obtenerFecha() { return fech; }

Componente* Venta::obtenerComponente() { return producto; }

void Venta::agregarProducto(Componente* pro) { producto = pro; }

double Venta::ventaConGanancia() {
	return (producto->obtenerPrecio() * 0.35) + producto->obtenerPrecio();
}

double Venta::ventaSinGanancia() { return producto->obtenerPrecio(); }