/** Ejercicio 4 ESTRUCTURA DE CICLO EXACTO
Hacer un programa para que el usuario ingrese dos números y luego el programa muestre por pantalla
 los números entre el menor y el mayor de ambos.
  Ejemplo, si el usuario ingresa 3 y 15, se mostrarán los números entre el 3 y el 15;
   y si el usuario ingresa 25 y 8, se mostrarán los números entre el 8 y el 25.  */

#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "INGRESE DOS NUMEROS: " << endl;
    cout << "Numero 1 : ";
    cin >> n1;
    cout << "Numero 2 : ";
    cin >> n2;
    if (n1 > n2) {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }
    for (int i = n1; i <= n2; i++) {
        cout << i << " ";
    }
    return 0;
}


