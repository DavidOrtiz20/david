#include <iostream>
using namespace std;

int main() {
    // Variables para almacenar los dos valores ingresados por el usuario
    int numero1, numero2;

    // Solicitar al usuario que ingrese el primer valor
    cout << "Ingrese el primer valor: ";
    cin >> numero1;

    // Solicitar al usuario que ingrese el segundo valor
    cout << "Ingrese el segundo valor: ";
    cin >> numero2;

    // Realizar la suma de los dos valores
    int suma = numero1 + numero2;

    // Mostrar el resultado en la salida estándar
    cout << "La suma de " << numero1 << " y " << numero2 << " es: " << suma << endl;

    return 0;
}
