#include <iostream>
#include <cmath>
using namespace std;

void areaCirculo(float);

int main () {
    float r, op;
    do {
    system("cls");
        cout << "CACLCULAR AREA DE UN CIRCULO\n";
        cout << "--------------------------------\n";
        cout << "Ingrese el radio del circulo: "; cin >> r;
        if (r <= 0) {
            cout << "El radio debe ser mayor a 0\n";
            system("pause>nul");
            system("cls");
        }
        else {
            cout << "--------------------------------\n"; 
            areaCirculo(r);
            system("pause>nul");
            system("cls");
        }
        cout << "Desea calcular el area de otro circulo?\n[1] Si\n[2] No\n"; cin >> op;
    } while (op == 1);
    return 0;
}

void areaCirculo(float a) {
    float area = M_PI * pow(a, 2); //M_PI = el valor de pi // pow = potencia (base, exponente)
    cout << "El area del circulo es: " << area << endl;
}