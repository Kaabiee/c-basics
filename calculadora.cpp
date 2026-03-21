#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <string>

using namespace std;

const double PI = acos(-1.0);

void limpiarEntrada() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

bool leerNumero(const string& mensaje, double& valor) {
    cout << mensaje;
    cin >> valor;

    if (cin.fail()) {
        cout << "Entrada invalida. Debes escribir un numero.\n";
        limpiarEntrada();
        return false;
    }

    return true;
}

bool leerEntero(const string& mensaje, int& valor) {
    cout << mensaje;
    cin >> valor;

    if (cin.fail()) {
        cout << "Entrada invalida. Debes escribir un numero entero.\n";
        limpiarEntrada();
        return false;
    }

    return true;
}

void mostrarMenu() {
    cout << "\n===== CALCULADORA CIENTIFICA =====\n";
    cout << "1. Sumar\n";
    cout << "2. Restar\n";
    cout << "3. Multiplicar\n";
    cout << "4. Dividir\n";
    cout << "5. Potencia\n";
    cout << "6. Raiz cuadrada\n";
    cout << "7. Seno\n";
    cout << "8. Coseno\n";
    cout << "9. Tangente\n";
    cout << "10. Logaritmo natural\n";
    cout << "11. Logaritmo base 10\n";
    cout << "12. Factorial\n";
    cout << "0. Salir\n";
}

int main() {
    int opcion = -1;

    cout << fixed << setprecision(6);
    cout << "Hola, bienvenido a la calculadora cientifica.\n";

    do {
        mostrarMenu();

        if (!leerEntero("Selecciona una opcion: ", opcion)) {
            continue;
        }

        double a = 0.0;
        double b = 0.0;

        switch (opcion) {
            case 1:
                if (leerNumero("Ingresa el primer numero: ", a) &&
                    leerNumero("Ingresa el segundo numero: ", b)) {
                    cout << "Resultado: " << a + b << "\n";
                }
                break;

            case 2:
                if (leerNumero("Ingresa el primer numero: ", a) &&
                    leerNumero("Ingresa el segundo numero: ", b)) {
                    cout << "Resultado: " << a - b << "\n";
                }
                break;

            case 3:
                if (leerNumero("Ingresa el primer numero: ", a) &&
                    leerNumero("Ingresa el segundo numero: ", b)) {
                    cout << "Resultado: " << a * b << "\n";
                }
                break;

            case 4:
                if (leerNumero("Ingresa el dividendo: ", a) &&
                    leerNumero("Ingresa el divisor: ", b)) {
                    if (b == 0.0) {
                        cout << "No se puede dividir entre cero.\n";
                    } else {
                        cout << "Resultado: " << a / b << "\n";
                    }
                }
                break;

            case 5:
                if (leerNumero("Ingresa la base: ", a) &&
                    leerNumero("Ingresa el exponente: ", b)) {
                    cout << "Resultado: " << pow(a, b) << "\n";
                }
                break;

            case 6:
                if (leerNumero("Ingresa el numero: ", a)) {
                    if (a < 0.0) {
                        cout << "No existe raiz cuadrada real para numeros negativos.\n";
                    } else {
                        cout << "Resultado: " << sqrt(a) << "\n";
                    }
                }
                break;

            case 7:
                if (leerNumero("Ingresa el angulo en grados: ", a)) {
                    cout << "Resultado: " << sin(a * PI / 180.0) << "\n";
                }
                break;

            case 8:
                if (leerNumero("Ingresa el angulo en grados: ", a)) {
                    cout << "Resultado: " << cos(a * PI / 180.0) << "\n";
                }
                break;

            case 9:
                if (leerNumero("Ingresa el angulo en grados: ", a)) {
                    cout << "Resultado: " << tan(a * PI / 180.0) << "\n";
                }
                break;

            case 10:
                if (leerNumero("Ingresa el numero: ", a)) {
                    if (a <= 0.0) {
                        cout << "El logaritmo natural solo existe para numeros mayores que cero.\n";
                    } else {
                        cout << "Resultado: " << log(a) << "\n";
                    }
                }
                break;

            case 11:
                if (leerNumero("Ingresa el numero: ", a)) {
                    if (a <= 0.0) {
                        cout << "El logaritmo base 10 solo existe para numeros mayores que cero.\n";
                    } else {
                        cout << "Resultado: " << log10(a) << "\n";
                    }
                }
                break;

            case 12: {
                int numero = 0;
                if (leerEntero("Ingresa un numero entero no negativo: ", numero)) {
                    if (numero < 0) {
                        cout << "El factorial no existe para numeros negativos.\n";
                    } else {
                        unsigned long long factorial = 1;
                        for (int i = 2; i <= numero; i++) {
                            factorial *= i;
                        }
                        cout << "Resultado: " << factorial << "\n";
                    }
                }
                break;
            }

            case 0:
                cout << "Gracias por usar la calculadora cientifica.\n";
                break;

            default:
                cout << "Opcion no valida. Intenta de nuevo.\n";
                break;
        }
    } while (opcion != 0);

    return 0;
}
