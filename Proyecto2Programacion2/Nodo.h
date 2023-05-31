#pragma once
#include<iostream>
#include<sstream>

using namespace std;

template <class T>
class Nodo {
private:
	T* obj;
	Nodo<T>* sig;
public:
	Nodo(T*, Nodo<T>*);
	virtual ~Nodo();
	void modificarObj(T*);
	T* obtenerObj() const;
	void modificarSig(Nodo<T>*);
	Nodo<T>* obtenerSig() const;
};

template<class T>
Nodo<T>::Nodo(T* ob, Nodo<T>* s) :obj(ob), sig(s) {}

template<class T>
Nodo<T>::~Nodo() {}

template<class T>
void Nodo<T>::modificarObj(T* ob) { obj = ob; }

template<class T>
T* Nodo<T>::obtenerObj() const { return obj; }

template<class T>
void Nodo<T>::modificarSig(Nodo<T>* s) { sig = s; }

template<class T>
Nodo<T>* Nodo<T>::obtenerSig() const { return sig; }
