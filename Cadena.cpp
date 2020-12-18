#include "Cadena.h"
#include <iostream>

Cadena::Cadena(char h[]) {
	std::strcpy(contenido, h);
}

void Cadena::imprimir() {
	std::cout << contenido;
}