/** Ejercicio 18 ESTRUCTURA DE CICLO EXACTO
La cuenta corriente de la famosa cantante Lady Lara ha registrado 14 movimientos durante la semana pasada. Por cada movimiento se registr�:
N�mero de movimiento
D�a
Tipo ('E' - Extracci�n / 'D' - Dep�sito)
Importe

Existe un registro por movimiento. Se desea calcular e informar:
El saldo final de la cuenta.
El porcentaje de movimientos de extracci�n y el porcentaje de dep�sito.
El dep�sito de mayor importe indicando tambi�n d�a y n�mero de movimiento.
La cantidad de movimientos del d�a 10. */

#include <iostream>
using namespace std;

int main() {
    const int num_movimientos = 14;
    int num_movimiento, dia, depositos = 0, extracciones = 0, movimientos_dia_10 = 0;
    char tipo;
    double importe, saldo_final = 0.0, max_deposito = 0.0;
    int max_deposito_dia, max_deposito_num_movimiento;

    for (int i = 0; i < num_movimientos; i++) {
        cout << "N�mero de movimiento: ";
        cin >> num_movimiento;
        cout << "D�a: ";
        cin >> dia;
        cout << "Tipo ('E' - Extracci�n / 'D' - Dep�sito): ";
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
    cout << "Porcentaje de movimientos de extracci�n: " << (extracciones * 100.0) / num_movimientos << "%" << endl;
    cout << "Porcentaje de movimientos de dep�sito: " << (depositos * 100.0) / num_movimientos << "%" << endl;
    cout << "Dep�sito de mayor importe: " << max_deposito << ", d�a: " << max_deposito_dia << ", n�mero de movimiento: " << max_deposito_num_movimiento << endl;
    cout << "Cantidad de movimientos del d�a 10: " << movimientos_dia_10 << endl;

    return 0;
}
