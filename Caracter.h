#pragma once
#include "Nodo.h"
#ifndef CARACTER
#define CARACTER

class Caracter:public Nodo {
public :
	Caracter(char);
	char contenido;
	void imprimir();
	TipoNodo getTipo();
};

#endif