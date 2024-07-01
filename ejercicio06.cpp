#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void jugar(int);

int hum = 0; //variable global, humano gana
int com = 0; //variable global, computadora gana

int main () {
    int a, op;
    srand(time(0));
    do {
        hum = 0;
        com = 0;
        do {
            system("cls");
            cout << "  PIEDRA, PAPEL O TIJERA\n";
            cout << "Primero en llegar a 3 gana\n";
            cout << "--------------------------\n";
            cout << "\tCONTADOR:\n";
            cout << "Humano: " << hum << "\n";
            cout << "Computadora: " << com << "\n";
            cout << "--------------------------\n";
            if (hum < 3 && com < 3) {
                cout << "[1] Piedra\n[2] Papel\n[3] Tijera\n";
                cout << "--------------------------\n";
                cout << "Ingrese su opcion: "; cin >> a;
                jugar(a);
                system("pause>nul");
            }
        } while (hum < 3 && com < 3);
        system("cls");
        if (hum == 3) {
            cout << "Ganaste.\n\nFelicidades...\n";
        }
        else {
            cout << "Perdiste.\n\nLa proxima sera...\n";
        }
        system("pause>nul");
        system("cls");
        cout << "Desea jugar de nuevo?\n[1] Si\n[2] No\n"; cin >> op;
    } while (op == 1);
    if (op != 1) {
        system("cls");
        cout << "Gracias por jugar.\n\nSaliendo...\n";
        system("pause>nul");
    }
    return 0;
}

void jugar (int a) {
    int b = rand() % 3 + 1;
    if (a == 1) { //piedra
        if (b == 1) { //piedra
            cout << "Empate\n";
        }
        else if (b == 2) { //papel
            cout << "Computadora gana\n";
            com++;
        }
        else { //tijera
            cout << "Humano gana\n";
            hum++;
        }
    }
    else if (a == 2) { //papel
        if (b == 1) { //piedra
            cout << "Humano gana\n";
            hum++;
        }
        else if (b == 2) {  //papel
            cout << "Empate\n";
        }
        else { //tijera
            cout << "Computadora gana\n";
            com++;
        }
    }
    else if (a == 3){ //tijera
        if (b == 1) { //piedra
            cout << "Computadora gana\n";
            com++;
        }
        else if (b == 2) { //papel
            cout << "Humano gana\n";
            hum++;  
        }
        else { //tijera
            cout << "Empate\n";
        }
    }
    else {
        cout << "Opcion invalida\n";
    }
}