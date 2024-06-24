#include <iostream>
#include <cmath>
using namespace std;
int main () {
    system("cls");
    double num;
    cout << "Ingrese un numero: "; cin >> num;
    cout << "Valor absoluto: " << abs(num) << "\n";
    cout << "Raiz cuadrada: " << sqrt(num) << "\n";
    cout << "Potencia (n^2): " << pow(num, 2) << "\n";
    cout << "Redondeo al entero mas cercano: " << round(num) << "\n";
    cout << "Redondeo hacia arriba: " << ceil(num) << "\n";
    cout << "Redondeo hacia abajo: " << floor(num) << "\n";
    cout << "Seno: " << sin(num) << "\n";
    cout << "Coseno: " << cos(num) << "\n";
    cout << "Tangente: " << tan(num) << "\n";
    system("pause>nul");
    return 0;
}