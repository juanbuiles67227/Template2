// Template.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

extern "C" int agua(int valor1), energia(int valor2);

int main()
{
	int valor1, valor2, salida1, salida2;
	cout << "Ingrese el numero metroa cubicoa de agua : ";
	cin >> valor1;
	salida1 = agua(valor1);
	cin.get();
	cout << "El valor del agua es: " << salida1 << endl;

	cout << "Ingrese el valor de los kilovatios hora de la energía : ";
	cin >> valor2;
	salida2 = energia(valor2);
	cin.get();
	cout << "El valor de la energía es: " << salida2 << endl;


	//cout << "El valor del agua es: " << agua() << " El valor de la energia es: " << energia() << endl;;
	//cout << "La suma es: " << suma() << endl;
	system("PAUSE");
	return 0;
}
