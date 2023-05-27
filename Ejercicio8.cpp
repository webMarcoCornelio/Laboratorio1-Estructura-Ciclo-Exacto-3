/** Ejercicio 8 ESTRUCTURA DE CICLO EXACTO
Hacer un programa que permita ingresar el legajo y sueldo de 10 empleados y determine:
• El legajo del empleado con mayor sueldo */

#include <iostream>
using namespace std;

int main() {
    int legajo_max;
    double sueldo_max = -1;
    for (int i = 1; i <= 10; i++) {
        int legajo;
        double sueldo;
        cout << "Ingrese el Legajo del Empleado " << i << ": ";
        cin >> legajo;
        cout << "Ingrese el Sueldo del Empleado " << i << ": ";
        cin >> sueldo;
        if (sueldo > sueldo_max) {
            legajo_max = legajo;
            sueldo_max = sueldo;
        }
    }
    cout << "El legajo del empleado con mayor sueldo es " << legajo_max << "." << endl;
    return 0;
}
