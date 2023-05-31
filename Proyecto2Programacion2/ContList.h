#pragma once
#include"Nodo.h"

template<class T>
class ContList {
private:
	int cantObjs;
	Nodo<T>* pPio;
public:
	ContList();
	ContList(const ContList<T>&);
	virtual ~ContList();
	void agregarObj(T*);
	string imprimirObjs();
	void eliminarTodosObjs();
	int obtenerCantObjs();
	bool eliminarObjEspecif(T*);
	ContList& operator = (const ContList<T>&);
};

template<class T>
ContList<T>::ContList() {
	pPio = NULL;
	cantObjs = 0;
}

template<class T>
ContList<T>::~ContList() {
	eliminarTodosObjs();
}

template<class T>
ContList<T>::ContList(const ContList<T>& cl) {
	pPio = NULL;
	Nodo<T>* pAux = NULL;
	Nodo<T>* pAux2 = cl.pPio;
	while (pAux2 != NULL) {
		Nodo<T>* newN = new Nodo<T>(pAux2->obtenerObj(), NULL);
		if (pPio == NULL) {
			pPio = newN;
			pAux = pPio;
		}
		else {
			pAux->modificarSig(newN);
			pAux = pAux->obtenerSig();
		}
		pAux2 = pAux2->obtenerSig();
	}
}

template<class T>
void ContList<T>::agregarObj(T* obj) {
	pPio = new Nodo<T>(obj, pPio);
	cantObjs++;
}

template<class T>
string ContList<T>::imprimirObjs() {
	stringstream s;
	Nodo<T>* pAux = pPio;
	while (pAux != NULL) {
		s << pAux->obtenerObj()->imprimir() << endl;
		pAux = pAux->obtenerSig();
	}
	return s.str();
}

template<class T>
void ContList<T>::eliminarTodosObjs() {
	Nodo<T>* pAux = pPio;
	Nodo<T>* pAux2 = NULL;
	while (pAux != NULL) {
		pAux2 = pAux->obtenerSig();
		delete pAux;
		pAux = pAux2;
	}
	pPio = NULL;
}

template<class T>
int ContList<T>::obtenerCantObjs() { return cantObjs; }

template<class T>
bool ContList<T>::eliminarObjEspecif(T* obj) {
	Nodo<T>* pAux = pPio;
	Nodo<T>* pAux2 = NULL;

	if (pAux != NULL && pAux->obtenerObj() == obj) {
		pPio = pAux->obtenerSig();
		delete pAux;
		cantObjs--;
		return true;
	}

	while (pAux != NULL) {
		if (pAux->obtenerObj() == obj) {
			pAux2->modificarSig(pAux->obtenerSig());
			delete pAux;
			cantObjs--;
			return true;
		}
		pAux2 = pAux;
		pAux = pAux->obtenerSig();
	}
	return false;
}

template<class T>
ContList<T>& ContList<T>::operator = (const ContList<T>& cl) {
	Nodo<T> pAux = cl.Ppio;

	if (this != &cl) {
		this->eliminarTodosObjs();

		while (pAux != NULL) {
			T* obj = new T(*(pAux->obtenerObj()));
			agregarObj(obj);
			pAux = pAux->obtenerSig();
		}
	}
	return *this;
}