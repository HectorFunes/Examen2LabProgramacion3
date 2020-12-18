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
	std::cout << "[";
	actual->imprimir();
	std::cout << "]";
	if (actual->siguiente != primero) {
		std::cout << "->";
		imprimirListaRec(actual->siguiente);
	}
	else {
		std::cout << std::endl;
	}
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

void ListaCircular::eliminarNodo(int pos) {
	Nodo* actual = primero;
	Nodo* temp=nullptr;
	int i = 0;
	while (actual != nullptr&&i<pos) {
		temp = actual;
		actual = actual->siguiente;
		i++;
	}
	if (actual == primero) {
		primero = primero->siguiente;
		primero->anterior = ultimo;
		ultimo->siguiente = primero;
	}
	else if (actual == ultimo) {
		ultimo = temp;
		ultimo->siguiente = primero;
		primero->anterior = ultimo;
	}
	else {
		temp->siguiente = actual->siguiente;
		actual->siguiente->anterior = temp;
	}
}