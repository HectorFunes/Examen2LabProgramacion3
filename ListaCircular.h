#pragma once
#ifndef LISTACIRCULAR_H
#define LISTACIRCULAR_H
#include "Caracter.h"
#include "Cadena.h"
#include "Entero.h"
#include "Decimal.h"

class ListaCircular {
public :
	Nodo* primero;
	Nodo* ultimo;
	void agregarNodo(Nodo*);
	void imprimirLista();
	void eliminarNodo();
	int numPorTipo(TipoNodo);
	void imprimirCantidadTipos();
	void eliminarNodo(int);
private:
	void imprimirListaRec(Nodo*);
};
#endif