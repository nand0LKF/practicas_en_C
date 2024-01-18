#include <iostream>

using namespace std;

int main() {
    char opcion;
    string nombre;

    // Solicitar el nombre del usuario
    cout << "Ingrese su nombre: ";
    getline(cin, nombre);

    do {
        // Menú de opciones
        cout << "\n--- Menú ---" << endl;
        cout << "1. Multiplicación con 2 números" << endl;
        cout << "2. División con 2 números" << endl;
        cout << "3. Multiplicación con 3 números" << endl;
        cout << "4. Mayor de 3 números" << endl;
        cout << "S. Salir" << endl;

        // Solicitar al usuario que seleccione una opción
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case '1': {
                // Opción 1: Multiplicación con 2 números
                double num1, num2;
                cout << "Ingrese dos números para multiplicar: ";
                cin >> num1 >> num2;
                cout << "Resultado: " << (num1 * num2) << endl;
                break;
            }
            case '2': {
                // Opción 2: División con 2 números
                double num1, num2;
                cout << "Ingrese dos números para dividir: ";
                cin >> num1 >> num2;
                if (num2 != 0) {
                    cout << "Resultado: " << (num1 / num2) << endl;
                } else {
                    cout << "Error: No se puede dividir por cero." << endl;
                }
                break;
            }
            case '3': {
                // Opción 3: Multiplicación con 3 números
                double num1, num2, num3;
                cout << "Ingrese tres números para multiplicar: ";
                cin >> num1 >> num2 >> num3;
                cout << "Resultado: " << (num1 * num2 * num3) << endl;
                break;
            }
            case '4': {
                // Opción 4: Encontrar el mayor de 3 números
                double num1, num2, num3;
                cout << "Ingrese tres números para encontrar el mayor: ";
                cin >> num1 >> num2 >> num3;

                double mayor = num1;
                if (num2 > mayor) mayor = num2;
                if (num3 > mayor) mayor = num3;

                cout << "El mayor de los tres números es: " << mayor << endl;
                break;
            }
            case 's':
            case 'S':
                // Salir del programa
                cout << "Saliendo del programa. ¡Hasta luego alumno, " << nombre << "!" << endl;
                break;
            default:
                // Opción no válida
                cout << "Opción no válida. Inténtelo de nuevo." << endl;
        }

    } while (opcion != 's' && opcion != 'S');

    return 0;
}
