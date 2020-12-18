#include "Caracter.h"

Caracter::Caracter(char caracter) :contenido(caracter){}

void Caracter::imprimir() {
	std::cout << contenido;
}

TipoNodo Caracter::getTipo() {
	return TipoCaracter;
}