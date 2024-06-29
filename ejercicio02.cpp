#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generar(int, int);

int main () {
    int n, e;
    system("cls");
    cout << "Ingrese la cantidad maxima de numeros aleatorias a generar (0 - n): "; cin >> n;
    cout << "Ingrese la cantidad de numeros aleatorios a generar: "; cin >> e;
    generar(n, e);
    system("pause>nul");
    return 0;
}

void generar(int n, int e) {
    srand(time(0)); // semilla para generar numeros aleatorios (cambia cada segundo)
    for (int i = 0; i < e; i++) {
        if (i < e - 1) {
            cout << rand() % n << "; "; // genera un numero aleatorio entre 0 y n
        }
        else {
        cout << rand() % n << "\n";
        }
    }
}