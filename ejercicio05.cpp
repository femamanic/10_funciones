#include <iostream>
#include <cmath>
#include <complex> // Para trabajar con números complejos (parte real e imaginaria)

using namespace std;

void discriminante(int, int, int, int&);
void calcularRaices(int, int, int, complex<double>&, complex<double>&);

int main() {
    system("cls");
    int a, b, c, d;
    complex <double> r1, r2;
    cout << "Ingrese el coeficiente a: "; cin >> a;
    cout << "Ingrese el coeficiente b: "; cin >> b;
    cout << "Ingrese el coxeficiente c: "; cin >> c;
    discriminante(a, b, c, d);
    calcularRaices(a, b, d, r1, r2);
    if (d >= 0) {
        cout << "Soluciones reales:\n";
        cout << "r1 = " << r1.real() << "\n"; // Parte real (.real())
        cout << "r2 = " << r2.real() << "\n"; // Parte real (.real())
    } else {
        cout << "Soluciones complejas:\n";
        cout << "r1 = " << r1.real() << " + " << r1.imag() << "i\n"; // Parte real e imaginaria (.real() y .imag())
        cout << "r2 = " << r2.real() << " - " << r2.imag() << "i\n"; // Parte real e imaginaria (.real() y .imag())
    }
    system("pause>nul");
    return 0;
}

void discriminante(int a, int b, int c, int& d) {
    d = pow(b, 2) - 4 * a * c;
}

void calcularRaices(int a, int b, int d, complex<double>& r1, complex<double>& r2) {
    if (d == 0) {
        r1 = r2 = -b / (2 * a);
    }
    else if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
    }
    else {
        r1 = complex<double>(-b / (2.0 * a), sqrt(abs(d)) / (2.0 * a)); // Parte real e imaginaria (complex<double>(real, imag))
        r2 = complex<double>(-b / (2.0 * a), sqrt(abs(d)) / (2.0 * a)); // Parte real e imaginaria (complex<double>(real, imag))
    }
}