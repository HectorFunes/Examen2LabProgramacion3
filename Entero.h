#pragma once
#include "Nodo.h"
#ifndef ENTERO_H
#define ENTERO_H

class Entero :public Nodo {
public:
	Entero(int);
	int contenido;
	void imprimir();
	TipoNodo getTipo();

};

#endif
