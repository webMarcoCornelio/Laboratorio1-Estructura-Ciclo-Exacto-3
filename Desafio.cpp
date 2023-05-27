/** Desafío
Tu sobrina está aprendiendo las tablas de multiplicar y quisiera disponer de un programa para que
 pueda corroborar que las cuentas realizadas en su cuaderno sean correctas. Ella sabe que estás estudiando
  programación y le parece que es algo que no debería llevarte más que unos pocos minutos.
Puntualmente te pidió que puedas ingresar un número entre 1 y 15 y dibuje por pantalla las tablas
 de dicho número desde el 0 hasta el 10 inclusive.
Por ejemplo: Ingresa el número del cual quieres ver los cálculos: 6 */

#include <iostream>
using namespace std;

 int main() {

     int num, i;
        cout << "Que Tabla deseas multiplicar del 0 al 15: ";
        cin >> num;

     for(i=1; i<=15; i++){

         cout << num << "x" << i << " = " << i*num<<endl;
     }

     return 0;
 }
