#include <iostream>
using namespace std;

int main() {
string opciones = 
R"(
1.- Sumar
2.- Restar
3.- Multiplicacion
4.- Division)";

double respuesta, a, b;

    cout << "Hola, bienvenido a la calculadora. " << endl;
    cout << "Elige una opcion con numeros" << opciones << endl;
    cin >> respuesta;
    cout << "Muy bien, ahora ingresa tu primer numero." << endl;
    cin >> a;
    cout << "Ahora tu segundo numero." << endl;
    cin >> b;

double suma = a + b;
double resta = a - b;
double multiplicacion = a * b;
double division = a / b;

    if (respuesta == 1) {
        cout << "Tu respuesta es: " << suma << endl;
    }

    else if (respuesta == 2) {
        cout << "Tu respuesta es: " << resta << endl;
    }

    else if (respuesta == 3) {
        cout << "Tu respuesta es: " << multiplicacion << endl;
    }

    else if (respuesta == 4) {
        cout << "Tu respuesta es: " << division << endl;
    }

    else {
        cout << "Tu respuesta no es valida. " << endl;
    }

    return 0;
}