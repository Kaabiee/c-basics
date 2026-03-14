#include <iostream>
using namespace std;

int main() {
    int cantidad;
    double calificacion, suma = 0, promedio;

    cout << "====== Calculadora de calificaciones ======" << endl;
    cout << "¿Cual es el numero de calificaciones que quieres utilizar?" << endl;
    cin >> cantidad;

    for (int i = 1; i <= cantidad; i++) {
        cout << "Ahora pon las calificaciones una por una" << endl;
        cin >> calificacion;
        suma += calificacion;
    }


    promedio = suma / cantidad;

    if (promedio >= 6) {
        cout << "El promedio de la clase es: " << promedio << endl;
        cout << "Aprobado" << endl;
    }

    else {
        cout << "El promedio de la clase es: " << promedio << endl;
        cout << "Reprobado" << endl;
    }
    

    return 0;
}