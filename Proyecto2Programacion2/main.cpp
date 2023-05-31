#include <sstream>
#include <iostream>

//Reproductor
#include "Reproductor.h"
#include "Tornamesa.h"
#include "Radio.h"
#include "UnidadDiscoCompacto.h"
#include "DispBluetooth.h"
//Procesador
#include "Procesador.h"
#include "Mezclador.h"
#include "Amplificador.h"
//Salida Audio
#include "SalidaDeAudio.h"
#include "Parlante.h"
#include "Audifonos.h"
//Sistema Composite template
#include  "Sistema.h"

using namespace std;

int main() {

	/*Pruebas
	Clientes:
	Cliente* c1 = new Persona("Saul", "1111", "Costarricense", "saul@gmail.com", "Costa Rica", "San Jose");
	Cliente* c2 = new Empresa("Tacos", "234A", "Costa Rica", "Heredia");
	cout << c1->toString() << endl;
	cout << c2->toString() << endl;
	*/


	//Prueba de composite, pero sin sistemas, solo los individuales

	Componente* tornamesa = new Tornamesa("Tornamesa", 100, "J604jua8", "Algo loco");
	Componente* radio = new Radio("Radio", 200, "sfafqf", "Algo loco");
	Componente* unidaddDC = new UnidadDiscoCompacto("Unidadd de Dicos Compactos", 300, "jvkdnsyu", "Algo loco");
	Componente* dispBlue = new DispBluetooth("Dispositivo bluethoot", 400, "vfrvf322", "Algo loco");
	Componente* mezclador = new Mezclador("Mezclador", 500, "cdsvs22", "Algo loco");
	Componente* amplificador = new Amplificador("Amplificador", 600, "s2s1c2vs", "Algo loco");
	Componente* parlante = new Amplificador("Parlante", 700, "lgtp5544", "Algo loco");
	Componente* audifonos = new Audifonos("Audifonos", 800, "laj1ucm2", "Algo loco");

	cout << "--------------------------" << endl;

	cout << tornamesa->imprimir() << endl;
	cout << radio->imprimir() << endl;
	cout << unidaddDC->imprimir() << endl;
	cout << dispBlue->imprimir() << endl;
	cout << mezclador->imprimir() << endl;
	cout << amplificador->imprimir() << endl;
	cout << parlante->imprimir() << endl;
	cout << audifonos->imprimir() << endl;

	cout << "--------------------------" << endl;

	Componente* sistema = new Sistema();
	sistema->agregarComponente(tornamesa);
	sistema->agregarComponente(radio);
	sistema->agregarComponente(unidaddDC);
	cout << sistema->imprimir() << endl;
	cout << "--------------------------------" << endl;

	//sistema->eliminarComponenteEspecifico(tornamesa);
	//cout << sistema->imprimir() << endl;


	/*
		Template:
	ContList<Cliente>* cl = new ContList<Cliente>();
	cl->agregarObj(c1);
	cl->agregarObj(c2);
	cout<< cl->imprimirObjs() << endl;
	cl->obtenerCantObjs();

	ContList<Cliente>* cl2 = new ContList<Cliente>(*cl);
	cout << cl2->imprimirObjs() << endl;

	ContList<Cliente>* cl3 = new ContList<Cliente>();
	cl3->agregarObj(c1);
	cl3->agregarObj(c1);
	cout << cl3->imprimirObjs() << endl;
	cl3 = cl;
	cout << cl3->imprimirObjs() << endl;
	*/


	system("pause");
	return 0;
}