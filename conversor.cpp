#include <iostream>
using namespace std;

int main(){
    int opcion;
    double resultado, a;
    string opciones =
    R"(
    1.-kilometros a metros
    2.-Metros a centimetros
    3.-Celsius a Fahrenheit)";

    cout << "Hola, bienvenido al conversor" << endl;
    cout << "Que opcion deseas usar" << endl;
    cout << "Recuerda solo contestar con numeros." << endl;
    cout << opciones << endl;
    cin >> opcion;

    if (opcion == 1){
        cout << "Cuantos kilometros tienes?" << endl;
        cin >> a;
        
        resultado = a * 1000;
        cout << "Tu respuesta es: " << resultado << endl;
    }

    else if (opcion == 2){
        cout << "Cuantos metros tienes?" << endl;
        cin >> a;

        resultado = a * 100;
        cout << "Tu respuesta es: " << resultado << endl;

    }

    else if (opcion == 3){
        cout << "Cual es tu temperatura en Celsius?" << endl;
        cin >> a;

        resultado = (a * 1.8) + 32;
        cout << "Tu respuesta en  Fahrenheit: " << resultado << endl;
    }
        
    return 0; 
}