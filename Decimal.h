#pragma once
#include "Nodo.h"
#ifndef DECIMAL_H
#define DECIMAL_H

class Decimal :public Nodo{
public:
	Decimal(float);
	float contenido;
	void imprimir();
	TipoNodo getTipo();

};

#endif