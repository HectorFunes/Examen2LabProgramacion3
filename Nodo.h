#pragma once
#ifndef NODO_H
#define NODO_H
#include "Caracter.h";

class Nodo {
public:
	Nodo(int);
	Nodo(const char[]);
	Nodo(char);
	Nodo(float);
	Nodo* anterior;
	Nodo* siguiente;

	
};

#endif