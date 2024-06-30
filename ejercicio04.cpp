#include <iostream>
#include <cmath>

using namespace std;

void calcularRaices(int, int, int);

int main() {
    system("cls");
    int a, b, c;
    cout << "Ingrese el coeficiente a: "; cin >> a;
    cout << "Ingrese el coeficiente b: "; cin >> b;
    cout << "Ingrese el coeficiente c: "; cin >> c;
    int d = pow(b, 2) - 4 * a * c;
    cout << "El discriminante es: " << d << "\nLas raices son:\n";
    calcularRaices(a, b, d);
    system("pause>nul");
    return 0;
}

void calcularRaices(int a, int b, int d) {
    if (d == 0) {
        cout << "Reales e iguales:\n";
        cout << "r1 = r2 = " << float (-b / (2.0 * a)) << "\n";
    }
    else if (d > 0){
        cout << "Reales y diferentes:\n";
        cout << "r1 = " << float (-b + sqrt(d)) / (2.0 * a) << "\n";
        cout << "r2 = " << float (-b - sqrt(d)) / (2.0 * a) << "\n";
    }
    else {
        cout << "Complejas y diferentes:\n";
        cout << "r1 = " << float (-b / (2.0 * a)) << " + " << float (sqrt(abs(d))) / (2.0 * a) << "i\n";
        cout << "r2 = " << float (-b / (2.0 * a)) << " - " << float (sqrt(abs(d))) / (2.0 * a) << "i\n";
    }
}