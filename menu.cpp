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
        cout << "=====================\n";
        cout << "  CAJERO AUTOMATICO\n";
        cout << "=====================\n";
        cout << "[1] Depositar\n";
        cout << "[2] Retirar\n";
        cout << "[3] Mostrar saldo\n";
        cout << "[0] Salir\n";
        cout << "=====================\n";
        cout << "Seleccione una opcion: ";
        cin >> op;
        switch (op){
        case 1:
            system("cls");
            cout << "Ingrese el monto a depositar: \n";
            cout << "============================\n";
            cin >> dep; depositar(dep);
            cout << "============================\n";
            cout << "Deposito exitoso ...\n";
            system("pause>nul");
            break;
        case 2:
            system("cls");
            cout << "============================\n";
            cout << "Ingrese el monto a retirar: \n";
            cout << "============================\n";
            cin >> ret;
            if (ret > saldo){
                cout << "============================\n";
                cout << "Saldo insuficiente ...\n";
                system("pause>nul");
                break;
            }
            else {retirar(ret);
            cout << "============================\n";
            cout << "Retiro exitoso ...\n";
            system("pause>nul");
            break;
            }
        case 3:
            system("cls");
            cout << "============================\n";
            cout << "Su saldo es: \n";
            cout << "============================\n";
            cout << saldo << "\n";
            system("pause>nul");
            break;
        case 0:
            system("cls");
            cout << "Saliendo ...\n";
            system("pause>nul");
            break;
        default :
            system("cls");
            cout << "Opcion no valida ...\n";
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