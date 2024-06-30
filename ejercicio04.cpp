#include <iostream>
#include <cmath>

using namespace std;

void calcularRaices(int, int, int);

int main() {
    int a, b, c, op;
    do {
        system("cls");
        cout << "CALCULAR RAICES DE UNA ECUACION CUADRATICA\n";
        cout << "\t     ax^2 + bx + c = 0\n";
        cout << "------------------------------------------\n";
        cout << "Ingrese el coeficiente a: "; cin >> a;
        cout << "Ingrese el coeficiente b: "; cin >> b;
        cout << "Ingrese el coeficiente c: "; cin >> c;
        if (a == 0) {
            cout << "------------------------------------------\n";
            cout << "El coeficiente 'a' no puede ser 0.\n";
            system("pause>nul");
        }
        else {
            int d = pow(b, 2) - 4 * a * c;
            cout << "------------------------------------------\n";
            cout << "El discriminante es: " << d << "\n------------------------------------------\n" << "Las raices son:\n";
            calcularRaices(a, b, d);
            system("pause>nul");
        }
        system("cls");
        cout << "Desea calcular otra ecuacion cuadratica?\n[1] Si\n[2] No\n"; cin >> op;
    } while (op == 1);
    if (op != 1) {
        system("cls");
        cout << "Gracias por usar el programa.\n\nSaliendo...\n";
        system("pause>nul");
    }
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