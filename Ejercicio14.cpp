/** Ejercicio 14 ESTRUCTURA DE CICLO EXACTO
Hacer un programa para ingresar un n�mero y luego informar la cantidad de divisores de ese n�mero.
Ejemplo 1. Si se ingresa 6 se listar�n: 4 divisores.
Ejemplo 2. Si se ingresa 9 se listar�n: 3 divisores.
Ejemplo 3. Si se ingresa 11 se listar�: 2 divisores.  */

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingrese un Numero: ";
    cin >> num;
    int divisores = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            divisores++;
        }
    }
    cout << "El Numero " << num << " tiene " << divisores << " divisores." << endl;
    return 0;
}

