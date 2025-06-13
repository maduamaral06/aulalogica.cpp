#include <iostream>
using namespace std;

int main(){
    
   int num, resultado;

   cout << "===Tabuada===";
   cout <<"\n Digite um número: ";
   cin >> num;

   cout <<"\nTabuada do " << num << endl;
   
   for (int multiplicador = 0; multiplicador <= 10 ; multiplicador++)
   {
    resultado = num * multiplicador;
    cout << num << " x " << multiplicador << " = " << resultado << endl;
   }
   
    return 0;

}

