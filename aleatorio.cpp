#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    system("cls");
    srand(time(0));                      // Inicializa el generador de numeros aleatorios
    int numeroMagico = rand() % 100 + 1; // Genera un numero aleatorio entre 1 y 100
    int intento;
    cout << "Adivina el numero magico (entre 1 y 100)\n";
    while (true) {
        cin >> intento;
        if (intento > numeroMagico) {
            cout << "Muy alto intenta de nuevo: ";
        }
        else if (intento < numeroMagico) {
            cout << "Muy bajo intenta de nuevo: ";
        }
        else{
            cout << "Correcto el numero magico es: " << numeroMagico << "\n";
            break;
        }
    }
    system("pause>nul");
    return 0;
}