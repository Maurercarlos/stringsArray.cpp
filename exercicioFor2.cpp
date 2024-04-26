//Escreva um programa que verifica se um número inserido 
//pelo usuário é primo ou não.

#include <iostream>
#include <string>
using namespace std;

int main(){

    int tamanho;
    int aux = 0;
    cout << "Escreva um número de 1 a 20: " << endl;
    cin >> tamanho;

    for (int i = 2; i <= tamanho / 2; i++)
    {
        if (tamanho % i == 0) {
            aux = 1;
        }
    }
    if(aux == 0){
        cout << tamanho << " é primo" << endl;
    }
    else{
        
    }




return 0;
}