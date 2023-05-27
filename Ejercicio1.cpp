/** Ejercicio 1 ESTRUCTURA DE CICLO EXACTO
Hacer un programa para mostrar por pantalla los números del 1 al 20 salteando de a 3 elementos.
 Es decir: 1, 4, 7, 10, 13, 16, 19.
Importante: El programa no tiene ningún ingreso de datos. */

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 20; i++) {
        if (i % 3 == 1) {
            cout << i << " ";
        }
    }
    return 0;
}
