#include <iostream>

using namespace std;

int main() {
    // Declaración de variables
    int n1, n2;
    unsigned int nn1, nn2;
    double d1, d2;
    char c1;
    bool b1;

    // Asignaciones
    n1 = 2147483645; // CORRECTA: n1 es int y el valor cabe en su rango

    nn1 = n1 + 3;    // CORRECTA: conversión de int a unsigned int sin pérdida de información

    // INCORRECTA: c1 no está inicializada y su valor es indeterminado
    d1 = c1 + n1;

    // INCORRECTA: conversión de int grande a char implica pérdida de información
    c1 = n1 + 2;

    // INCORRECTA: no se puede asignar un valor negativo a una variable bool
    b1 = -1000;

    // Imprimir resultados
    cout << "Valores correctos:" << endl;
    cout << "Valor de n1: " << n1 << endl;
    cout << "Valor de nn1: " << nn1 << endl;

    cout << "\nValores incorrectos:" << endl;
    cout << "Valor de d1: c1 no está inicializada y su valor es indeterminado" << endl;
    cout << "Valor de c1: conversión de int grande a char implica pérdida de información" << endl;
    cout << "Valor de B1: no se puede asignar un valor negativo a una variable bool" << endl;

    return 0;
}
