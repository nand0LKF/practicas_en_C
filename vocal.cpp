#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	// Definición y asignación de valores char
	char letra;
	letra = 'L';
	cout << "Imprimiendo letra 'L': " << letra << endl;
	
	letra = 65; // ASCII para la letra A.
	cout << "Imprimiendo ASCII '65': " << letra << endl;
	
	// Imprimir en código ASCII las vocales mayúsculas y minúsculas,
	// luego el arroba y la barra invertida @ \
	char vocal_may = 183; // ASCII para la letra A con acento
	char vocal_min = 160; // ASCII para la letra a con acento
	cout << "Imprimiendo ASCII 'A': " << static_cast<int>(vocal_may) << ".." << static_cast<int>(vocal_min) << endl;
	
	vocal_may = 144; // ASCII para la letra E con acento
	vocal_min = 130; // ASCII para la letra e con acento
	cout << "Imprimiendo ASCII 'E': " << static_cast<int>(vocal_may) << ".." << static_cast<int>(vocal_min) << endl;
	
	vocal_may = 214; // ASCII para la letra O con acento
	vocal_min = 141; // ASCII para la letra o con acento
	cout << "Imprimiendo ASCII 'O': " << static_cast<int>(vocal_may) << ".." << static_cast<int>(vocal_min) << endl;
	
	vocal_may = 224; // ASCII para la letra a con acento
	vocal_min = 149; // ASCII para la letra u con acento
	cout << "Imprimiendo ASCII 'U': " << static_cast<int>(vocal_may) << ".." << static_cast<int>(vocal_min) << endl;
	
	vocal_may = 235; // ASCII para la letra e con diéresis
	vocal_min = 163; // ASCII para la letra ú con acento
	cout << "Imprimiendo ASCII 'Ú': " << static_cast<int>(vocal_may) << ".." << static_cast<int>(vocal_min) << endl;
	
	return 0;
}z
