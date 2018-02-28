#pragma once
#ifndef CHAR_H
#define CHAR_H

#include "Object.h"
class Char : public Object
{
private:
	char valor;
public:
	Char();
	~Char();
	Char(char);
	 char getvalor();
	 void setvalor(char);
	 Tipo getTipo();
	 void imprimir();
	//virtual void imprimir();

	//Object:Char{ "u" };

	//implementar métodos virtual y sets y gets
	//Constructores y destructores





};

#endif