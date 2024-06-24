#include <iostream>
using namespace std;
int main () {
    system ("cls");
    int op;
    cout << "CAJERO AUTOMATICO\n";
    cout << "[1] Depositar\n";
    cout << "[2] Retirar\n";
    cout << "[3] Mostrar saldo\n";
    cout << "[0] Salir\n";
    cout << "Seleccione una opcion: "; cin >> op;
    switch (op) {
        case 0 :
        cout << "Saliendo ...\n";
        system ("pause>nul");
        break;
    }
}