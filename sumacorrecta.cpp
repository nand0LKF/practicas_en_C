#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int resultado = 0;
	cout << "Cuanto es 10+5? ";
	cin >> resultado;
	if(resultado == (10+5))
	{
		cout << "Respuesta Correcta. Felicitaciones!\n";
	}
	else
	{
		cout << "Respuesta es incorrecta.!\n";
	}
	return 0;
}

