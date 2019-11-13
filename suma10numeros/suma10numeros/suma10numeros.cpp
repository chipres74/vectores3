// suma10numeros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	int x, tabla[10];
	int sum, res, mul, div;

	for (x = 0; x < 10; x++)
	{
		cout << "Introduzca numero: ";
		cin >> tabla[x];
	}

	sum = tabla[0];
	res = tabla[0];
	mul = tabla[0];
	div = tabla[0];

	for (x = 1; x < 10; x++)
	{
		sum = sum + tabla[x];
		res = res - tabla[x];
		mul = mul * tabla[x];
		div = div / tabla[x];
	}

	cout << "Suma: " << sum << endl;
	cout << "Resta: " << res << endl;
	cout << "Multiplicacion: " << mul << endl;
	cout << "Division: " << div << endl;

	system("pause");
	return 0;
}
