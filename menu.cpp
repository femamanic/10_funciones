#include <iostream>
using namespace std;

void depositar(float);
void retirar(float);

float saldo = 0; // Variable global - cualquier función puede acceder a ella

int main(){
    float dep, ret;
    int op;
    do {
        system("cls");
        cout << "CAJERO AUTOMATICO\n";
        cout << "[1] Depositar\n";
        cout << "[2] Retirar\n";
        cout << "[3] Mostrar saldo\n";
        cout << "[0] Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> op;
        switch (op){
        case 1:
            cout << "Ingrese el monto a depositar: ";
            cin >> dep;
            depositar(dep);
            cout << "Deposito exitoso\n";
            system("pause>nul");
            break;
        case 2:
            cout << "Ingrese el monto a retirar: ";
            cin >> ret;
            retirar(ret);
            cout << "Retiro exitoso\n";
            system("pause>nul");
            break;
        case 3:
            cout << "Mostrando saldo ...\n"
                << saldo << "\n";
            system("pause>nul");
            break;
        case 0:
            cout << "Saliendo ...\n";
            system("pause>nul");
            break;
        default :
            cout << "Opcion no valida\n";
            system("pause>nul");
            break;
        }
    } while (op != 0);
}

void depositar(float monto){
    saldo = saldo + monto;
}

void retirar(float monto){
    saldo = saldo - monto;
}