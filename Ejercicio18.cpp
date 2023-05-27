/** Ejercicio 18 ESTRUCTURA DE CICLO EXACTO
La cuenta corriente de la famosa cantante Lady Lara ha registrado 14 movimientos durante la semana pasada. Por cada movimiento se registró:
Número de movimiento
Día
Tipo ('E' - Extracción / 'D' - Depósito)
Importe

Existe un registro por movimiento. Se desea calcular e informar:
El saldo final de la cuenta.
El porcentaje de movimientos de extracción y el porcentaje de depósito.
El depósito de mayor importe indicando también día y número de movimiento.
La cantidad de movimientos del día 10. */

#include <iostream>
using namespace std;

int main() {
    const int num_movimientos = 14;
    int num_movimiento, dia, depositos = 0, extracciones = 0, movimientos_dia_10 = 0;
    char tipo;
    double importe, saldo_final = 0.0, max_deposito = 0.0;
    int max_deposito_dia, max_deposito_num_movimiento;

    for (int i = 0; i < num_movimientos; i++) {
        cout << "Número de movimiento: ";
        cin >> num_movimiento;
        cout << "Día: ";
        cin >> dia;
        cout << "Tipo ('E' - Extracción / 'D' - Depósito): ";
        cin >> tipo;
        cout << "Importe: ";
        cin >> importe;

        if (tipo == 'E') {
            saldo_final -= importe;
            extracciones++;
        } else if (tipo == 'D') {
            saldo_final += importe;
            depositos++;
            if (importe > max_deposito) {
                max_deposito = importe;
                max_deposito_dia = dia;
                max_deposito_num_movimiento = num_movimiento;
            }
        }

        if (dia == 10) {
            movimientos_dia_10++;
        }
    }

    cout << "Saldo final de la cuenta: " << saldo_final << endl;
    cout << "Porcentaje de movimientos de extracción: " << (extracciones * 100.0) / num_movimientos << "%" << endl;
    cout << "Porcentaje de movimientos de depósito: " << (depositos * 100.0) / num_movimientos << "%" << endl;
    cout << "Depósito de mayor importe: " << max_deposito << ", día: " << max_deposito_dia << ", número de movimiento: " << max_deposito_num_movimiento << endl;
    cout << "Cantidad de movimientos del día 10: " << movimientos_dia_10 << endl;

    return 0;
}
