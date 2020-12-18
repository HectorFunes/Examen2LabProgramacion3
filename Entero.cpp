#include "Entero.h"

Entero::Entero(int r) :contenido(r){}

void Entero::imprimir() {
	std::cout << contenido;
}

TipoNodo Entero::getTipo() {
	return TipoEntero;
}