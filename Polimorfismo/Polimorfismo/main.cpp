#include <iostream>
#include <conio.h>
#include "Object.h"
#include "Char.h"
#include "Integer.h"
#include "String.h"
#include <stdio.h>

using namespace std;

int canti;
/*
void imprimirObjeto(Object *objeto)
{
	if (objeto->getTipo() == T_char)
	{
		Char *ca = (Char *)objeto;
		std::cout << "Valor de char: " << ca->getvalor() << " ";
		canti++;
	}
	else if (objeto->getTipo() == T_String){
		String *st = (String *)objeto;
	std::cout << "Valor de string: " << st->getvalor() << " ";
		canti++;
	}
	else if (objeto->getTipo() == T_int) {
		Integer *it = (Integer *)objeto;
		std::cout << "Valor integer: " << it->getvalor() << " ";
		canti++;
	}

	objeto->imprimir();
	

	}

	*/
/*
void imprimirObjetoC(Object *objeto)
{
	if (objeto->getTipo() == T_char)
	{
		Char *ca = (Char *)objeto;
		std::cout << "Valor de char: " << ca->getvalor() << " ";
		canti++;
	}
}
*/
/*
void imprimirObjetoS(Object *objeto)
{
	if (objeto->getTipo() == T_String) {
		String *st = (String *)objeto;
		std::cout << "Valor de string: " << st->getvalor() << " ";
		canti++;
	}
}

void imprimirObjetoI(Object *objeto)
{
	if (objeto->getTipo() == T_int) {
		Integer *it = (Integer *)objeto;
		std::cout << "Valor integer: " << it->getvalor() << " ";
		canti++;
	}
	
}
*/
int main() {
	
	Object * objeto[100];
	int options = 0;
	char x;
	cout << "Qué tipo de dato desea usar: 1- Char; 2-String 3-Int 4-Salir\n ";
	cin >> options;
	do {
		switch (options) {
			
		case 1:
			objeto[100] = new Char();
			for (int i = 0; i < 100; i++)
			{
				objeto[i]->imprimir();
				//imprimirObjetoC(objeto[i]);
			}
			break;
		case 2:
			objeto[100] = new String();
			for (int i = 0; i < 100; i++)
			{
				objeto[i]->imprimir();
				//imprimirObjetoC(objeto[i]);
			}
			break;
		case 3:
			objeto[100] = new Integer();
			for (int i = 0; i < 100; i++)
			{
				objeto[i]->imprimir();
				//imprimirObjetoC(objeto[i]);
			}
			break;
		case 4:
			break;
		}
	} while (options != 4);
	
	
	
	//Object * objeto[100];
	/*
	objeto[0] = new Char('u');
	objeto[1] = new Integer(34);
	objeto[2] = new String("Hellooo Worldd!!!!!!!!!!!!!");
	objeto[3] = new String("hi");

	for (int i = 0; i < 100; i++)
	{
		objeto[i]->imprimir();
		//imprimirObjetoC(objeto[i]);
	}
	*/
	system("pause");

	//Saber cuáles objetos de cada tipo existen en el arreglo
	//Imprimir cada objeto del arreglo





}