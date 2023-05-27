/** Ejercicio 11 ESTRUCTURA DE CICLO EXACTO
Hacer un programa para ingresar una lista de 8 números y luego informar si todos están ordenados en forma creciente.
 En caso de haber dos números “empatados” considerarlos como crecientes.
Por ejemplo si la lista fuera:
Ejemplo 1: -10, 1, 5, 7, 15, 18, 20, 23 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 2: 10, 10, 15, 20, 25, 25, 28, 33 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 3: 10, 1, 15, 7, -15, 18, 20, 23 se emitirá un cartel: “Conjunto No Ordenado”  */

#include <iostream>
using namespace std;

int main() {
    int nums[8];
    for (int i = 0; i < 8; i++) {
        cout << "Ingrese el Numero " << i + 1 << ": ";
        cin >> nums[i];
    }
    bool ordenado = true;
    for (int i = 0; i < 7; i++) {
        if (nums[i] > nums[i + 1]) {
            ordenado = false;
            break;
        }
    }
    if (ordenado) {
        cout << "**** Conjunto Ordenado ****" << endl;
    } else {
        cout << "////// Conjunto NO Ordenado //////" << endl;
    }
    return 0;
}
