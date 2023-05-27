/** Ejercicio 3 ESTRUCTURA DE CICLO EXACTO
Hacer un programa para que el usuario ingrese un número positivo y que luego se muestren por
 pantalla los números entre el 1 y el número ingresado por el usuario.
  Ejemplo. Si el usuario ingresa 15, se mostrarán los números entre el 1 y el 15. */

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "INGRESE UN NUMERO POSITIVO: ";
    cin >> n;
    while (n <= 0) {
        cout << "EL NUMERO INGRESADO NO ES POSITIVO. INGRESE OTRO NUMERO: ";
        cin >> n;
    }
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    return 0;
}
