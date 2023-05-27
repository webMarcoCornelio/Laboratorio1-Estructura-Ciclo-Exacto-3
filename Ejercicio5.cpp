/** Ejercicio 5 ESTRUCTURA DE CICLO EXACTO
Hacer un programa para ingresar un N valor que indica la cantidad de números que componen una
lista y luego solicitar se ingresen esos N números. Se pide informar cuantos son positivos */

#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "INGRESE LA CANTIDAD DE NUMEROS: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int num;
        cout << "INGRESE EL NUMERO " << i << ": ";
        cin >> num;
        if (num > 0) {
            count++;
        }
    }
    cout << "Hay " << count << " NUMEROS POSITIVOS." << endl;
    return 0;
}

