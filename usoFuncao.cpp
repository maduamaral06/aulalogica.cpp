#include <iostream>
using namespace std;

int dobraNumero(int numero){
    int resultado;
    resultado = numero * 2;

    return resultado;
}

int main(){
    int num, dobro_num;

    cout << "Digite um numero: ";
    cin >> num;

    dobro_num = dobraNumero(num);

    cout << "\n Dobro: " << dobro_num;
}