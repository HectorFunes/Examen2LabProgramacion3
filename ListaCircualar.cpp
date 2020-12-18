#include "ListaCircular.h"

void ListaCircular::agregarNodo(Nodo* nuevo) {
	if (primero == nullptr) {
		primero = nuevo;
		ultimo = nuevo;
		primero->siguiente = primero;
		primero->anterior = ultimo;
	}
	else {
		ultimo->siguiente = nuevo;
		nuevo->anterior = ultimo;
		nuevo->siguiente = primero;
		ultimo = nuevo;
		primero->anterior = ultimo;
	}
}

void ListaCircular::imprimirLista() {
	imprimirListaRec(primero);
}

void ListaCircular::imprimirListaRec(Nodo* actual) {
	
}

void ListaCircular::imprimirCantidadTipos() {
	std::cout << "Enteros: " << numPorTipo(TipoEntero) << std::endl;
	std::cout << "Cadenas: " << numPorTipo(TipoCadena) << std::endl;
	std::cout << "Caracteres: " << numPorTipo(TipoCaracter) << std::endl;
	std::cout << "Decimales: " << numPorTipo(TipoDecimal) << std::endl;
}

int ListaCircular::numPorTipo(TipoNodo tipo) { 
	Nodo* temp=primero;
	int veces=0;
	do {
		if (temp->getTipo() == tipo) {
			veces++;
		}
		temp = temp->siguiente;
	} while (temp != primero);
	return veces;
}