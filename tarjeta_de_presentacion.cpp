#include <iostream>
using namespace std;

int main() {
    cout << "tajetas de presentacion" << endl;
    string nombre; //es como el input de python
    cout << "Primero se necesita tu nombre completo." << endl;
    getline(cin, nombre);
    cout << "Ahora tu edad" << endl;
    int edad; // es como el int de python, tambien esta float para decimales
    cin >> edad;// se usa para pedir informacion, osea el input pero el string es el que decide si hay numero o letras
    cout << "==========================" << endl;
    cout << "     TARJETA DE PRESENTACIÓN" << endl;
    cout << "==========================" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "==========================" << endl;   
    return 0;
}