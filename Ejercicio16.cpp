/** Ejercicio 16 ESTRUCTURA DE CICLO EXACTO
Hacer un programa que muestre los números primos entre el 1 y el 10000.
El usuario no debe ingresar nada en este programa. */

#include <iostream>
using namespace std;

int main() {
    cout << "Numeros Primos entre 1 y 10000: " << endl;
    for (int num = 2; num <= 10000; num++) {
        bool es_primo = true;
        for (int divisor = 2; divisor < num; divisor++) {
            if (num % divisor == 0) {
                es_primo = false;
                break;
            }
        }
        if (es_primo) {
            cout << num << " ";
        }
    }
    cout << endl;
    return 0;
}
