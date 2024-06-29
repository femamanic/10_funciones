#include <iostream>
#include <cmath>
using namespace std;

void areaCirculo(float);

int main () {
    float r;
    system("cls");
    cout << "Ingrese el radio del circulo: "; cin >> r;
    areaCirculo(r);
    system("pause>nul");
    return 0;
}

void areaCirculo(float a) {
    float area = M_PI * pow(a, 2); //M_PI = el valor de pi // pow = potencia (base, exponente)
    cout << "El area del circulo es: " << area << endl;
}