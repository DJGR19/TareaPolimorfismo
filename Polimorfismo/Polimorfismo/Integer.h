#pragma once
#ifndef INTEGER_H
#define INTEGER_H

#include "Object.h"
class Integer : public Object
{
private:
	int valor;
public:
	Integer();
	~Integer();
	Integer(int);
	 int getvalor();
	 void setvalor(int);
	 Tipo getTipo();
	 void imprimir();
//Object:Integer{ 100 };
	//virtual 
	//implementar métodos virtual y sets y gets
	//Conductores y destructores
};

#endif
