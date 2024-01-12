#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	short int numero_entero_p;
	unsigned short int numero_entero_p1;
	int numero_entero;
	unsigned int numero_entero_s; // Agregué la variable que parece estar faltando
	float numero_decimal;
	double numero_decimal_g;
	
	// Asignando valores límite de los tipos de dato
	numero_entero_p = 32767;
	cout << "Número entero pequeño: " << numero_entero_p << endl;
	
	numero_entero_p1 = 65535; // Este es el valor límite del tipo de dato
	cout << "Número entero pequeño positivo: " << numero_entero_p1 << endl;
	
	numero_entero = 2147483647;
	cout << "Número entero: " << numero_entero << endl;
	
	numero_entero_s = 4294967295;
	cout << "Número entero positivo: " << numero_entero_s << endl;
	
	
	return 0;
}
