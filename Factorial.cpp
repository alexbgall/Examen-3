Este archivo es el examen parcial 3
#include <iostream>
using namespace std;

int factorial(int num);

int main()
{
	int num, fact=0;
	cout << "Ingrese el numero que desea el factorial: " << endl;
	cin >> num;
	cout << "El factorial de " << num << " es: " << factorial(num) << endl;

	return 0;
}

int factorial(int num) 
{
	if (num <= 1)
	{
		return 1;
	}
	else
	{
		return num * factorial(num - 1);
	}
}