#pragma once

#include "Object.h"
#include <string>
using namespace std;


#ifndef STRING_H
#define STRING_H



class String :public Object
{

private:
	string valor;

public:
	String();
	~String();
	String(string);
	 string getvalor();
	 void setvalor(string);
	 Tipo getTipo();
	 void imprimir();
	//Object:String{ "Hi" };
	//implementar métodos virtual y sets y gets
	//Conductores y destructores


};





#endif
