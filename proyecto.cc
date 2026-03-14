#include <iostream>
using namespace std;

int main() {
    int numero, limite;
    char continuar = 's';

    cout << "Tabla de multiplicar interactiva" << endl;

    while (continuar == 's' || continuar == 'S') {
        cout << "\nIngresa el numero que quieres multiplicar: ";
        cin >> numero;

        cout << "Hasta que numero quieres la tabla: ";
        cin >> limite;

        cout << "\nTabla del " << numero << ":" << endl;
        for (int i = 1; i <= limite; i++) {
            cout << numero << " x " << i << " = " << numero * i << endl;
        }

        cout << "\nQuieres ver otra tabla? (s/n): ";
        cin >> continuar;
    }

    cout << "Programa finalizado." << endl;
    return 0;
}
