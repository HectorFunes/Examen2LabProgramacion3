#include "Nodo.h"

Nodo::Nodo(char caracter) {
	Nodo* nuevo = this;
	Caracter* r = new Caracter(caracter);
	nuevo= new Caracter(caracter);
}

void Nodo::imprimir() {
	
}