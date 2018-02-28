#include "String.h"
#include "Object.h"
#include <iostream>
#include <string>

//using namespace std;

String::String() {}
String::~String() {}


String::String(string c)
{
	setvalor(c);

}

void String::setvalor(string valor)
{
	this->valor = valor;

}

string String::getvalor()
{
	return valor;
}

void String::imprimir()
{
	cout << "Object:String [" << this->getvalor() << "{" << endl;
}

Tipo String::getTipo()
{
	return T_String;
}


