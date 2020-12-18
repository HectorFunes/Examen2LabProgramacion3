#include "Cadena.h"
#include <iostream>
#include <string>

Cadena::Cadena(char h[]) {
	std::strcpy(contenido, h);
}

void Cadena::imprimir() {
	std::cout << contenido;
}

TipoNodo Cadena::getTipo() {
	return TipoCadena;
}