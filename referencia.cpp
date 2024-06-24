#include <iostream>
using namespace std;

void porValor(int);
void porReferencia(int&);

int main(){
    system("cls");
    int num = 5;
    cout << "Antes de pasar por valor, num = "<< num << "\n";
    porValor(num);
    cout << "Despues de pasar por valor, num = "<< num << "\n";
    cout << "Antes de pasar por referencia, num = "<< num << "\n";
    porReferencia(num);
    cout << "Despues de pasar por referencia, num = "<< num << "\n";
    system("pause>nul");
    return 0;
}

void porValor(int a){
    a = 10;
    cout << "Dentro de porValor, a = " << a << "\n";
}

void porReferencia(int &a){
    a = 10;
    cout << "Dentro de porReferencia, a = " << a << "\n";
}