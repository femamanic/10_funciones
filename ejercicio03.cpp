#include <iostream>
#include <cmath>
using namespace std;

void hipotenusa(float, float);

int main () {
    float a, b;
    system("cls");
    cout << "Ingrese el valor del cateto a: "; cin >> a;
    cout << "Ingrese el valor del cateto b: "; cin >> b;
    hipotenusa(a, b);
    system("pause>nul");
    return 0;
}

void hipotenusa(float a, float b) {
    float hipotenusa = sqrt(pow(a, 2) + pow(b, 2)); // sqrt = raiz cuadrada, pow = potencia (base, exponente)
    cout << "La hipotenusa del triangulo rectangulo es: " << hipotenusa << "\n";
}