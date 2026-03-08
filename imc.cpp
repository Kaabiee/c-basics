#include <iostream>
using namespace std;

int main() {
    cout << "Hola, bienvenido a la calculadora imc." << endl;
    double peso, altura, imc;

    cout << "Primero ingresa tu peso." << endl;
    cin >> peso;

    cout << "Ahora tu altura" << endl;
    cin >> altura;

    imc = peso / (altura * altura);

    cout << "Tu imc es: " << imc << endl;

    return 0;
}