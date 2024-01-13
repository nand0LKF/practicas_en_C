#include <iostream>

int main(int argc, char *argv[]) {
	// Declaración del booleano
	bool b0;
	b0 = true;
	std::cout << "Variable con valor TRUE: " << b0 << std::endl;
	
	b0 = false;
	std::cout << "Variable con valor FALSE: " << b0 << std::endl;
	
	// Asignación de valores numéricos.
	// Si es cero es FALSO, si es diferente de cero es VERDADERO
	b0 = 0; // El valor se verá como FALSE
	std::cout << "Variable con valor 0: " << b0 << std::endl;
	
	b0 = 1; // El valor se verá como TRUE
	std::cout << "Variable con valor 1: " << b0 << std::endl;
	
	b0 = -100; // El valor se verá como TRUE
	std::cout << "Variable con valor -100: " << b0 << std::endl;
	
	return 0;
}
								   
	
