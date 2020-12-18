#include"Decimal.h"

Decimal::Decimal(float valor) :contenido(valor) {}

void Decimal::imprimir() {
	std::cout << contenido;
}

TipoNodo Decimal::getTipo() {
	return TipoDecimal;
}