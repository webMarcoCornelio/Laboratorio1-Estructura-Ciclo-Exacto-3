/** hacer un programa en c++ donde el famoso influencer santi larratea decidio hacer una colecta
 de dinero para pagar la deuda de 550000 de una institucion. Para ello le pidio
a sus seguidores que donen el dinero que sea posible. utilice un sistema que acepta donaciones
de dinero hasta que se cubriera el monto de la deuda. hacer un programa que emule dicho sistema.
el programa debe indicar la cantidad de donaciones que se registraron hasta cubrir el monto de la deuda. */

#include <iostream>
using namespace std;

int main() {
    const double deuda = 550000;
    double donacion, total_donaciones = 0.0;
    int num_donaciones = 0;

    while (total_donaciones < deuda) {
        cout << "Ingrese el monto de la donacion: ";
        cin >> donacion;

        total_donaciones += donacion;
        num_donaciones++;
    }

    cout << "Se registraron " << num_donaciones << " donaciones hasta cubrir el monto de la deuda." << endl;

    return 0;
}
