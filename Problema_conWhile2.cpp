/** hacer un programa en c++ que solicite numeros enteros hasta que se ingrese un numero para.
 calcular e informar:
  A) el maximo de los numeros ingresados.
  b) el promedio de los numeros negativos ingresados.
  Nota: el numero par ingresado no debe formar parte de ninguno de los calculos.

#include <iostream>
#include <limits>
using namespace std;

int main() {
    /// Datos de entrada
    int numero;

    /// Datos de salida
    int maximo = 0;
    float promedio;

    int contadorNegativos = 0;
    int acumuladorNegativos = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero %2 != 0) {
        maximo = numero;
    }

    while (numero %2 != 0) {
        cout << "Ingrese otro numero: ";
        cin >> numero;
        /// Punto A
        if (numero > maximo) {
            maximo = numero;
        }

        /// Punto B
        if (numero < 0) {
            contadorNegativos = contadorNegativos + 1;
            acumuladorNegativos = acumuladorNegativos + numero;
        }


    cout << "Ingrese otro numero: ";
    cin numero;
    }

    if (maximo != 0) {
        cout << "Maximo: " << maximo << endl;
    }

        /// operaciones

    }


#include <iostream>
#include <limits>
using namespace std;

int main() {
    int num, max_num = numeric_limits<int>::min(), sum_negativos = 0, count_negativos = 0;

    cout << "Ingrese un numero entero: ";
    cin >> num;
    while (num % 2 != 0) {
        if (num > max_num) {
            max_num = num;
        }
        if (num < 0) {
            sum_negativos += num;
            count_negativos++;
        }
        cout << "Ingrese un numero entero: ";
        cin >> num;
    }

    cout << "El maximo de los numeros ingresados es: " << max_num << endl;
    if (count_negativos > 0) {
        cout << "El promedio de los numeros negativos ingresados es: " << static_cast<double>(sum_negativos) / count_negativos << endl;
    } else {
        cout << "No se ingresaron numeros negativos." << endl;
    }

    return 0;
}
*/

#include <iostream>
#include <limits>
using namespace std;

int main() {
    int num, max_num = numeric_limits<int>::min(), sum_negativos = 0, count_negativos = 0;

    do {
        cout << "Ingrese un número entero: ";
        cin >> num;
        if (num % 2 == 0 && num != 0) {
            if (num > max_num) {
                max_num = num;
            }
        }
        if (num < 0) {
            sum_negativos += num;
            count_negativos++;
        }
    } while (num % 2 != 0);

    if (max_num != numeric_limits<int>::min()) {
        cout << "El máximo de los números pares ingresados es: " << max_num << endl;
    } else {
        cout << "No se ingresaron números pares." << endl;
    }
    if (count_negativos > 0) {
        cout << "El promedio de los números negativos ingresados es: " << static_cast<double>(sum_negativos) / count_negativos << endl;
    } else {
        cout << "No se ingresaron números negativos." << endl;
    }

    return 0;
}
