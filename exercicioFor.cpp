//Escreva um programa que imprime todos os números ímpares
//entre dois números inseridos pelo usuário.

#include <iostream>
#include <string>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int tamanho = 12;

    for (int i = 0; i < tamanho; i++)
    {
        if (arr[i] % 3 == 0) {
            cout << arr[i] << endl;
        }
    }
    

return 0;
}