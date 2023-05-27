/** Supongamos que tenemos la necesidad de cargar las notas de todos los estudiantes de un curso
 para calcular el promedio general. Sabiendo que son cinco alumnos y que todos rindieron un examen.
  Una forma correcta pero poco práctica sería resolverlo de la siguiente manera:  */

#include <iostream>
using namespace std;

int main(){
  const int ALUMNOS = 5;
  int i, nota, suma = 0;
  float promedio;
  cout << "Ingresar las notas del curso de cada Alumno: " << endl;
  for(i=1; i<=ALUMNOS; i++){
    cin >> nota;
    suma = suma + nota;
  }
  promedio = (float) suma / ALUMNOS;
  cout << "El promedio general es: " << promedio << endl;

  return 0;
}
