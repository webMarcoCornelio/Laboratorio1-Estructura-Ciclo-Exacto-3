/** Ejercicio 9 ESTRUCTURA DE CICLO EXACTO
Hacer un programa para ingresar una lista 10 números e informar el máximo de los negativos y el mínimo de los positivos.
 Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24.
Máximo Negativo: -3.
Mínimo Positivo: 2.  */

#include <iostream>
using namespace std;

int main() {
    int max_neg = -1;
    int min_pos = -1;
    for (int i = 1; i <= 10; i++) {
        int num;
        cout << "Ingrese el Numero " << i << ": ";
        cin >> num;
        if (num < 0 && (max_neg == -1 || num > max_neg)) {
            max_neg = num;
        } else if (num > 0 && (min_pos == -1 || num < min_pos)) {
            min_pos = num;
        }
    }
    if (max_neg == -1) {
        cout << "No hay Numeros negativos." << endl;
    } else {
        cout << "El Maximo de los negativos es " << max_neg << "." << endl;
    }
    if (min_pos == -1) {
        cout << "No hay Numeros positivos." << endl;
    } else {
        cout << "El Minimo de los positivos es " << min_pos << "." << endl;
    }
    return 0;
}


