/** Ejercicio 7 ESTRUCTURA DE CICLO EXACTO
Hacer un programa que permita ingresar el sueldo de 10 empleados y determine:
El sueldo máximo.
El sueldo mínimo.
El sueldo promedio.
Cantidad de sueldos mayores a $50000. */


#include <iostream>
#include <limits>
using namespace std;

int main() {
    const int num_empleados = 10;
    int sueldo, max_sueldo = numeric_limits<int>::min(), min_sueldo = numeric_limits<int>::max(), sum_sueldos = 0;
    int count_mayores_50000 = 0;

    for (int i = 0; i < num_empleados; i++) {
        cout << "Ingrese el sueldo del empleado " << i + 1 << ": ";
        cin >> sueldo;

        if (sueldo > max_sueldo) {
            max_sueldo = sueldo;
        }
        if (sueldo < min_sueldo) {
            min_sueldo = sueldo;
        }
        sum_sueldos += sueldo;
        if (sueldo > 50000) {
            count_mayores_50000++;
        }
    }

    cout << "Sueldo Maximo: " << max_sueldo << endl;
    cout << "Sueldo Minimo: " << min_sueldo << endl;
    cout << "Sueldo Promedio: " << sum_sueldos / num_empleados << endl;
    cout << "Cantidad de Sueldos Mayores a $50000: " << count_mayores_50000 << endl;

    return 0;
}

