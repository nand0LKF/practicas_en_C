#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	// Solicitar un n�mero y verificar si es par o impar 
	// El operador de m�dulo en C++ se utiliza con %
	
	int numero;
	cout << "Ingrese un n�mero: ";
	cin >> numero;
	
	if(numero % 2 == 0)
		cout << "El n�mero " << numero << " es PAR" << endl;
	else
		cout << "El n�mero " << numero << " es impar" << endl;
	
	return 0;
}

