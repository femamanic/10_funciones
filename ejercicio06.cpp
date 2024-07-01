#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void jugar(int);

int hum = 0; //variable global, humano gana
int com = 0; //variable global, computadora gana

int main () {
    int a;
    srand(time(0));
    do {
        system("cls");
        cout << "CONTADOR:\n";
        cout << "Humano: " << hum << "\n";
        cout << "Computadora: " << com << "\n";
        cout << "[1] Piedra\n[2] Papel\n[3] Tijera\n";
        cout << "Ingrese su opcion: "; cin >> a;
        jugar(a);
        system("pause>nul");
    } while (hum < 3 && com < 3);
    return 0;
}

void jugar (int a) {
    int b = rand() % 3;
    if (a == 1) { //piedra
        if (b == 0) { //piedra
            cout << "Empate\n";
        }
        else if (b == 1) { //papel
            cout << "Computadora gana\n";
            com++;
        }
        else { //tijera
            cout << "Humano gana\n";
            hum++;
        }
    }
    else if (a == 2) { //papel
        if (b == 0) { //piedra
            cout << "Humano gana\n";
            hum++;
        }
        else if (b == 1) {  //papel
            cout << "Empate\n";
        }
        else { //tijera
            cout << "Computadora gana\n";
            com++;
        }
    }
    else { //tijera
        if (b == 0) { //piedra
            cout << "Computadora gana\n";
            com++;
        }
        else if (b == 1) { //papel
            cout << "Humano gana\n";
            hum++;
        }
        else { //tijera
            cout << "Empate\n";
        }
    }
}