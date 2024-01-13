#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	// Definición y asignación de valores char
	char letra;
	letra = 'L';
	cout << "Imprimiendo letra 'L': " << letra << endl;
	
	// Error: Intento de asignar más de un caracter
	// letra = "ll";
	
	letra = 65; // ASCII para la letra A.
	cout << "Imprimiendo ASCII '65': " << letra << endl;

	char nombre[]="nando";
	
	cout<<"imprimiendo nombre: "<<nombre<<endl;
	cout<<"imprimiendo nombre[0]"<<nombre[0]<<endl;
	cout<<"imprimiendo nombre[1]"<<nombre[1]<<endl;
	cout<<"imprimiendo nombre[2]"<<nombre[2]<<endl;
	cout<<"imprimiendo nombre[3]"<<nombre[3]<<endl;
	cout<<"imprimiendo nombre[4]"<<nombre[4]<<endl;
	nombre[0]='n';
	nombre[1]='a';
	nombre[2]='n';
	nombre[3]='d';
	nombre[4]='o';
	cout<<"imprimiendo nombre: "<<nombre<<endl;
	nombre[0]='N';
	nombre[1]='A';
	nombre[2]='N';
	nombre[3]='D';
	nombre[4]='O';
	cout<<"imprimiendo nombre: "<<nombre<<endl;
	
	return 0;
}
