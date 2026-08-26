#include <iostream>
using namespace std;

int main(){
    int res = 0;

    string opciones =  R"(
    1. Lista de 5 numeros
    2. Lista de 10 numeros
    3. Lista de 15 numeros
    4. Lista de 20 numeros
    5. Lista de 25 numeros
    )";

    cout << "=== Estadistica de una lista de numeros ===" << endl;
    cout << "Hola, bienvenido." << endl;

    while (res != 6){
        cout << opciones << endl;
        cin >> res;

        if (res == 1){
            int numeros[5], cantidad;
            cout << "Genial eleguiste la lista de 5 numeros" << endl;
            cout << "Primero ingresa tus 5 numeros" << endl;
            for (int i = 0; i < cantidad; i++) {
                cout << "Número " << i + 1 << ": ";
                cin >> numeros[i];   // guarda en la posición i
            }

        } 

    



        else if (res == 6){
            cout << "Hasta luego, que tengas un buen dias." << endl;
            cout << "Cerrando programa..." << endl;
            break;
        }

        else{
            cout << "Tu respuesta no es valida." << endl;
            cout << "Por favor intentalo de nuevo." << endl;
            continue;
        }
    }

    return 0;
}