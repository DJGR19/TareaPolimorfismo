#include "Integer.h"
#include "Object.h"
#include <iostream>

using namespace std;

Integer::Integer() 
{}

Integer::~Integer() {}

Integer::Integer(int b)
{
	setvalor(b);

}

void Integer::setvalor(int valor)
{
	this->valor = valor;

}

int Integer::getvalor()
{
	return valor;
}

void Integer::imprimir()
{
	cout << "Object:Integer [" << this->getvalor() << "{" << endl;
}

Tipo Integer::getTipo()
{
	return T_int;
}




