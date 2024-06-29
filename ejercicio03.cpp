#include <iostream>
#include <cmath>
using namespace std;

void hipotenusa(float, float);

int main () {
    float a, b, op;
    do {
        system("cls");
        cout << "CALCULAR LA HIPOTENUSA DE UN TRIANGULO RECTANGULO\n";
        cout << "-------------------------------------------------\n";
        cout << "Ingrese el valor del cateto a: "; cin >> a;
        cout << "Ingrese el valor del cateto b: "; cin >> b;
        if (a <= 0 || b <= 0) {
            cout << "-------------------------------------------------\n";
            cout << "Los valores de los catetos deben ser mayores a 0\n";
            system("pause>nul");
            system("cls");
        }
        else {
            cout << "-------------------------------------------------\n";
            hipotenusa(a, b);
            system("pause>nul");
            system("cls");
        }
        cout << "Desea calcular otra hipotenusa?\n[1] Si\n[2] No\n"; cin >> op;
    } while (op == 1);
    if (op != 1) {
        cout << "Gracias por usar el programa.\n\nSaliendo...\n";
    }
    return 0;
}

void hipotenusa(float a, float b) {
    float hipotenusa = sqrt(pow(a, 2) + pow(b, 2)); // sqrt = raiz cuadrada, pow = potencia (base, exponente)
    cout << "La hipotenusa del triangulo rectangulo es: " << hipotenusa << "\n";
}