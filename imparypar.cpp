#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	// Solicitar un número y verificar si es par o impar 
	// El operador de módulo en C++ se utiliza con %
	
	int numero;
	cout << "Ingrese un número: ";
	cin >> numero;
	
	if(numero % 2 == 0)
		cout << "El número " << numero << " es PAR" << endl;
	else
		cout << "El número " << numero << " es impar" << endl;
	
	return 0;
}

