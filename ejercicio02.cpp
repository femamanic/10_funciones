#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generar(int, int);

int main () {
    int n, e, op;
    do {
        system("cls");
        cout << "\t\t   GENERADOR DE NUMEROS ALEATORIOS\n";
        cout << "---------------------------------------------------------------------\n";
        cout << "Ingrese la cantidad maxima de numeros aleatorias a generar (0 - n): "; cin >> n;
        cout << "Ingrese la cantidad de numeros aleatorios a generar: "; cin >> e;
        cout << "---------------------------------------------------------------------\n";
        if (n <= 0 || e < 0) {
            cout << "Error: Ingrese valores positivos.\n";
            system("pause>nul");
            system("cls");
        }
        else {
            generar(n, e);
            system("pause>nul");
            system("cls");
        }
        cout << "Desea generar mas numeros aleatorios?\n[1] Si\n[2] No:\n"; cin >> op;
    } while (op == 1);
    system("cls");
    if (op != 1) {
        cout << "Gracias por usar el programa.\n\nSaiendo...\n";
        system("pause>nul");
    }
    return 0;
}

void generar(int n, int e) {
    srand(time(0)); // semilla para generar numeros aleatorios (cambia cada segundo)
    for (int i = 0; i < e; i++) {
        if (i < e - 1) {
            cout << rand() % (n + 1) << "; "; // genera un numero aleatorio entre 0 y n
        }
        else {
        cout << rand() % (n + 1) << "\n";
        }
    }
}