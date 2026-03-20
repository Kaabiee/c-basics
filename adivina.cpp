#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int numero = rand() % 100 + 1, suma = 0, intento = 0, res = 0;
    
    string menu = R"(
    1.-jugar
    2.- salir)";

    while (res != 2){
        cout << "====== Adivina el Numero  entre el 1 y el 100======" << endl;
        cout << menu << endl;
        cout << "eligue una de las opciones" << endl;
        cin >> res;

        if (res == 1) {
            while (true) {
                cout << "Para empezar cual crees que es el numero?" << endl;
                cout << "Elige un numero del 1 al 100" << endl;
                cin >> intento;

                if (intento <= 0 || intento > 100) {
                    cout << "Tu respuesta no es valida." << endl;
                    continue;
                }

                suma += 1;

                if (intento == numero) {
                    cout << "Felicidades, tu numero es el correcto." << endl;
                    cout << "Tu numero de intentos es: " << suma << endl;
                    return 0;
                }
                else if (intento < numero) {
                    cout << "Incorrecto, el numero secreto es mayor." << endl;
                }
                else {
                    cout << "Incorrecto, el numero secreto es menor." << endl;
                }
            }
        }
        else if (res == 2) {
            cout << "Hasta luego, que tengas un buen dia." << endl;
            break;
        }
        else {
            cout << "Tu respuesta no es valida." << endl;
        }
    }


    return 0;
}