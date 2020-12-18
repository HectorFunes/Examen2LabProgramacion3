#pragma once
#include "Nodo.h"
#ifndef CADENA_H
#define CADENA_H

class Cadena :public Nodo {
public:
	Cadena(char[]);
	char contenido[20];
	void imprimir();
	TipoNodo getTipo();
};


#endif
