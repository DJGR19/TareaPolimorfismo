#include "Char.h"
#include "Object.h"
#include <iostream>

using namespace std;

Char::Char() {}
Char::~Char() {}

Char::Char(char a)
{
	setvalor(a);
	
}

void Char::setvalor(char valor)
{
	this->valor = valor;

}

char Char::getvalor() 
{
	return valor;
}

void Char::imprimir()
{
	cout << "Object:Char ["<< this-> getvalor() << "{" << endl;
}

Tipo Char::getTipo()
{
	return T_char;
}


