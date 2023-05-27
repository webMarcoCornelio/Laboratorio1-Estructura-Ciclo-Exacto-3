/** Ejercicio 15 ESTRUCTURA DE CICLO EXACTO
Hacer un programa para ingresar un número positivo y calcular e informar si el mismo es un número primo.
 Recordar que un número primo es un número natural que tiene exactamente dos divisores.  */

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingrese un Numero Positivo: ";
    cin >> num;
    bool es_primo = true;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            es_primo = false;
            break;
        }
    }
    if (es_primo) {
        cout << "El numero " << num << " ES Primo." << endl;
    } else {
        cout << "El numero " << num << " NO es Primo." << endl;
    }
    return 0;
}
