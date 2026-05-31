#include <iostream>
using namespace std;

int main() {
    double a, b, c, mayor, menor, mediano;

    cout << "====== Bienvenido al mayor de 3 ======" << endl;
    cout << "Para empezar pon tus 3 numeros uno por uno" << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    if (a >= b && a >= c) {
        mayor = a;
    }
    
    else if (b >= a && b >= c) {
        mayor = b;
    }

    else {
        mayor = c;
    }

    if (a <= b && a <= c){
        menor = a;
    }

    else if (b <= a && b <= c){
        menor = b;
    }

    else {
        menor = c;
    }

    mediano = a + b + c - mayor - menor;

    cout << "El mayor es: " << mayor << endl;
    cout << "El mediano es: " << mediano << endl;
    cout << "El menor es: " << menor << endl;

    return 0;
}
