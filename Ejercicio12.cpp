/** Ejercicio 12 ESTRUCTURA DE CICLO EXACTO
 Hacer un programa para ingresar 5 números, luego informar los 2 mayores
 valores ingresados, aclarando cual es el máximo y cual el que le sigue.
 Ejemplo: 10, 8, 12, 14, 3 el resultado será 14 y 12.
 Ejemplo: 14, 8, 12, 14 ,3 el resultado será 14 y 14.
 Ejemplo: -4, -8, -12, -20, -2 el resultado será -2 y -4  */


#include <iostream>
using namespace std;

int main() {
    float numero, mayor, smayor;

    cout << "Ingrese Numeros: ";
    cin >> mayor;

    for(int i=2; i<=5; i++) {
        cout << "Ingreso Numero: ";
        cin >> numero;

        if (numero > mayor) {
            smayor = mayor;
            mayor = numero;
        }
        else if (numero > smayor) {
            smayor = numero;
        }
    }

    cout << "El mayor es: " << mayor << endl;
    cout << "El segundo mayor es: " << smayor << endl;

    return 0;
}

