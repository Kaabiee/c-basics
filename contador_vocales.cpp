#include <iostream>
using namespace std;

int main(){
    int vocales = 0, consonantes = 0, total =0, res = 0;

    string texto, menu = R"(
    1.Ver vocales en un texto
    2.Salir
    )";
    
    cout << "Hola, bienvenido al contador de vocales" << endl;

    while (res != 2){
        cout << menu << endl;
        cout << "Cual la opcion que eligues" << endl;
        cin >> res;   // lee el número, pero deja el \n en el buffer
        cin.ignore();  // Si no uso esto el \n se queda en el buffer y al momento de ejecutar el getline el if no alcanza a pedir informacion
        
        if (res == 1){
            cout << "Para empezar, primero ingresa tu texto" << endl;
            getline(cin, texto);// ve el \n y piensa que ya terminaste de escribir

            
            for (int i = 0; i < texto.length(); i++){
                char letra = texto[i];  // accede a cada letra
            

            if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
                vocales++;
            } 
            
            else if (letra != ' '){
                consonantes++;
            }
            }
            
            total = consonantes + vocales;

            cout << "Tus vocales son " << vocales << ", tus consonantes son " << consonantes << " y el total de palabras son " << total << endl;
        }

        else if (res == 2){
            cout << "Hasta luego, que tengas un buen dia." << endl;
            cout << "Cerrando programa..." << endl;
            break;
        }

        else{
            cout << "Tu respusta no es valida." << endl;
            cout << "Por favor intenta de nuevo." << endl;
            continue;
        }
    }

    return 0;
}