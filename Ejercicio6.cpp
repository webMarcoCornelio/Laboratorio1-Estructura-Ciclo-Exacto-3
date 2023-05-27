/** Ejercicio 6 ESTRUCTURA DE CICLO EXACTO
Hacer un programa para ingresar una lista de 10 números, luego informar cuántos son positivos,
 cuántos son negativos, y cuántos iguales a cero. */

#include <iostream>
using namespace std;

int main() {
    int count_pos = 0, count_neg = 0, count_zero = 0;
    for (int i = 1; i <= 10; i++) {
        int num;
        cout << "Ingrese el Numero " << i << ": ";
        cin >> num;
        if (num > 0) {
            count_pos++;
        } else if (num < 0) {
            count_neg++;
        } else {
            count_zero++;
        }
    }
    cout << "Hay " << count_pos << " Numeros Positivos." << endl;
    cout << "Hay " << count_neg << " Numeros Negativos." << endl;
    cout << "Hay " << count_zero << " Numeros Iguales a Cero." << endl;
    return 0;
}


