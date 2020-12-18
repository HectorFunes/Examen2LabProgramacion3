#pragma once
#ifndef NODO_H
#define NODO_H
#include<iostream>
enum TipoNodo{
TipoEntero,TipoDecimal,TipoCaracter,TipoCadena
};
class Nodo {
public:
	Nodo* anterior;
	Nodo* siguiente;

	virtual void imprimir()=0;
	virtual TipoNodo getTipo()=0;

	
};

#endif