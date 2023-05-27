/** Ejercicio 13 ESTRUCTURA DE CICLO EXACTO
Hacer un programa para ingresar un n�mero y luego informar todos los divisores de ese n�mero.
Ejemplo 1. Si se ingresa 6 se listar�n: 1, 2, 3 y 6
Ejemplo 2. Si se ingresa 9 se listar�n: 1, 3 y 9.
Ejemplo 3. Si se ingresa 11 se listar�n 1 y 11.  */

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingrese un Numero: ";
    cin >> num;
    cout << "Los Divisores de " << num << " son: ";
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
