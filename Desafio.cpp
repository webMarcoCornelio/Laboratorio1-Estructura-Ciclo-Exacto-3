/** Desaf�o
Tu sobrina est� aprendiendo las tablas de multiplicar y quisiera disponer de un programa para que
 pueda corroborar que las cuentas realizadas en su cuaderno sean correctas. Ella sabe que est�s estudiando
  programaci�n y le parece que es algo que no deber�a llevarte m�s que unos pocos minutos.
Puntualmente te pidi� que puedas ingresar un n�mero entre 1 y 15 y dibuje por pantalla las tablas
 de dicho n�mero desde el 0 hasta el 10 inclusive.
Por ejemplo: Ingresa el n�mero del cual quieres ver los c�lculos: 6 */

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
