#include <iostream>
using namespace std;

int main() {
    int opcion;
    double saldo = 1000, cantidad;

    string monto = "Cual es la cantidad: ";

    string sp = "\n\n\n";

    string opciones = 
    R"(
    1. Depositar
    2. Retirar
    3. Ver saldo
    4. Salir)";

while (opcion != 4){
    cout << "====== Cajero automatico ======" << endl;
    cout << "====== Eligue una opcion ======" << endl;
    cout << opciones << endl;
    cin >> opcion;
    cout << sp << endl;

    if (opcion <= 0 || opcion >= 5){
        cout << "Tu opcion no es valida." << endl;
        cout << sp << endl;
        continue;
    }
    
    switch (opcion){
        case 1:
        cout << "==== Depositar ====" << endl;
        cout << monto << endl;
        cin >> cantidad;
        saldo += cantidad;
        cout << " tu saldo se actualizo a: " << saldo << endl;
        cout << sp << endl;
        break;

        case 2:
        cout << "==== Retiro ====" << endl;
        cout << monto << endl;
        cin >> cantidad;
            
        if (cantidad <= 0){
            cout << "Tu respuesta no es valida" << endl;
            cout << sp << endl;
            continue;
           }

        else if( cantidad > saldo){
            cout << "No cuentas con el saldo suficiente" << endl;
            cout << sp << endl;
            continue;
        }

        else{
            cout << "Tu retiro se ha completado con exito." << endl;
            saldo -= cantidad;
            cout << "Tu saldo restante es" << saldo << endl;
            cout << sp << endl;
            break;
        }

        case 3:
            cout << "==== Saldo ====" << endl;
            cout << "Tu saldo es: " << saldo << endl;
            cout << sp << endl;
            break;

        case 4:{
            cout << "!Hasta luego¡" << endl;
            break;
        }   
        
        default:
        cout << "Opcion no valida." << endl;
        cout << sp << endl;
            continue;
        }
    }

    return 0;
}