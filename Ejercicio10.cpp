/** Ejercicio 10 ESTRUCTURA DE CICLO EXACTO
Dada una lista de 7 números informar cual es el primer y segundo número impar ingresado.
Ejemplo: 8, 4, 5, 6, -9, 5,7 se informa 5 y -9.  */

#include <iostream>
using namespace std;

int main() {
    int primer_impar = -1;
    int segundo_impar = -1;
    for (int i = 1; i <= 7; i++) {
        int num;
        cout << "Ingrese el Numero " << i << ": ";
        cin >> num;
        if (num % 2 != 0) {
            if (primer_impar == -1) {
                primer_impar = num;
            } else if (segundo_impar == -1) {
                segundo_impar = num;
            }
        }
    }
    if (primer_impar == -1) {
        cout << "No hay Numeros impares." << endl;
    } else if (segundo_impar == -1) {
        cout << "Solo se ingreso un Numero impar: " << primer_impar << "." << endl;
    } else {
        cout << "El primer numero impar ingresado es " << primer_impar << "." << endl;
        cout << "El segundo numero impar ingresado es " << segundo_impar << "." << endl;
    }
    return 0;
}


