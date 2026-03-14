#include <iostream>
using namespace std;

int main(){
    int numero, limite;
    
    cout << "Calculadora interactiva" << endl;
    cout << "Para empezar ingresa el numero que quieres multiplicar" << endl;
    cin >> numero;

    cout << "Ahora hasta que numero lo quieres multiplicar" << endl;
    cin >> limite;

    for (int i = 1; i <= limite; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }
    return 0;
}