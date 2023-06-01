#include "Reproductor.h"
#include "Procesador.h"
#include "SalidaDeAudio.h"
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

	Componente* sistem1 = new Sistema("12345");
	cout << sistem1->imprimir() << endl;

	system("pause");
	return 0;
}