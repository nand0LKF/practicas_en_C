#include <iostream>

int main(int argc, char *argv[]) {
	// Declaraci�n del booleano
	bool b0;
	b0 = true;
	std::cout << "Variable con valor TRUE: " << b0 << std::endl;
	
	b0 = false;
	std::cout << "Variable con valor FALSE: " << b0 << std::endl;
	
	// Asignaci�n de valores num�ricos.
	// Si es cero es FALSO, si es diferente de cero es VERDADERO
	b0 = 0; // El valor se ver� como FALSE
	std::cout << "Variable con valor 0: " << b0 << std::endl;
	
	b0 = 1; // El valor se ver� como TRUE
	std::cout << "Variable con valor 1: " << b0 << std::endl;
	
	b0 = -100; // El valor se ver� como TRUE
	std::cout << "Variable con valor -100: " << b0 << std::endl;
	
	return 0;
}
								   
	
