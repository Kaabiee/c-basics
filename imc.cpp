#include <iostream>
using namespace std;

int main() {
    cout << "Hola, bienvenido a la calculadora imc." << endl;
    double peso, altura, imc; // es como un float pero mas preciso?

    cout << "Primero ingresa tu peso." << endl;
    cin >> peso;

    cout << "Ahora tu altura en metros." << endl;
    cin >> altura;
    if (altura <= 0) {
        cout << "Tu estatura no es valida." << endl;
        return 0;
    }

    imc = peso / (altura * altura);

    cout << "Tu imc es: " << imc << endl;

    if (imc < 18.5) {                 // es igual que python casi casi solo cambia el uso de llaves y parentesis.
        cout << "Tu peso esta bajo." << endl;
    }

    else if (imc < 25) {       // es el elif basicamente. 
        cout << "Tu peso esta bien." << endl;
    }

    else if (imc < 30) {
        cout << "Tienes sobrepeso." << endl;
    }

    else {
        cout << "Tienes obesidad." << endl;
    }
 
    return 0;
}