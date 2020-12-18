// Examen2LabProgramacion3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ListaCircular.h"
#include "Cadena.h"

int main()
{
    ListaCircular* lista=new ListaCircular();
    char nombre[] = "hector";
    Cadena n =Cadena(nombre);
    Entero b = Entero(9);
    Caracter c = Caracter('f');
    Caracter d = Caracter('p');
    Caracter e = Caracter('o');
    lista->agregarNodo(&n);
    lista->agregarNodo(&b);
    lista->agregarNodo(&d);
    lista->agregarNodo(&e);
    lista->agregarNodo(&c);
    n.imprimir();
    std::cout << lista->numPorTipo(TipoEntero)<< std::endl;
}

