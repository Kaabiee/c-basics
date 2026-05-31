#include <iostream>
using namespace std;

int main(){
    int opcion = 0;
    string texto;

    cout << "Hola, bienvenido a este programa para ver si tu palabra o texto es polindromo" << endl;

    while (opcion != 2){
        cout << "Quieres ver si tu palabra es un poíndromo? 1 para si, 2 para salir." << endl;
        cin >> opcion;
        cin.ignore();

        if (opcion == 1){
            string alreves;
            cout << "\n" << "Para comenzar primero pega tu palabra o texto" << endl;
            getline(cin, texto);

            // recorre el texto al reves
            for (int i = texto.length() - 1; i >= 0; i--){
                alreves += texto[i]; // pega cada letra en el orden opuesto (al reves)
            }

            if (texto == alreves){
                cout << "Tu palabra o texto es polindromo" << "\n" << endl;
                continue;
            }
            
            else{
                cout << "No lo es." << endl;
                cout << "Intentalo de nuevo con otra palabra.🫪" << "\n" << endl;
                continue;
            }

        }
        else if (opcion == 2){
            cout << "\n" << "Hasta luego, que tengas un buen dia!" << endl;
            cout << "Cerrando programa..." << endl;
            break;
        }
    }
    return 0;
}