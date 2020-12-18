

#include <iostream>
#include "ListaCircular.h"
#include <conio.h>


int main()
{
    ListaCircular* lista=new ListaCircular();

    char nombre[] = "hector";
    char nombre2[] = "Juan";

    Cadena n =Cadena(nombre);
    Entero b = Entero(9);
    Caracter c = Caracter('f');
    Caracter d = Caracter('p');
    Caracter e = Caracter('o');
    Decimal f = Decimal(0.99);
    Cadena g = Cadena(nombre2);
    //AgregarNodo
    lista->agregarNodo(&n);
    lista->agregarNodo(&b);
    lista->agregarNodo(&d);
    lista->agregarNodo(&e);
    lista->agregarNodo(&c);
    lista->agregarNodo(&f);
    lista->agregarNodo(&g);
    
    //ImprimirLista
    std::cout << std::endl;
    lista->imprimirLista();
    //imprimir tipos
    lista->imprimirCantidadTipos();
    std::cout << std::endl;
    //eliminarNodo
    lista->eliminarNodo(1);
    lista->eliminarNodo(0);
    lista->imprimirLista();
    lista->imprimirCantidadTipos();
    std::cout << std::endl;

    _getch();
}

