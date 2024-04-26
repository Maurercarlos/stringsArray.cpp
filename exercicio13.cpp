//Declare um array de caracteres texto com 50 posições. 
//Leia um texto do usuário usando cin e armazene-o em texto. 
//Encontre a primeira ocorrência da letra 'a' no texto e imprima a posição da letra.

#include <iostream>
#include <string>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5,6};
    int tamanho = 6;
   
    for (int i = 0; i < tamanho; i++)
    {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << endl;
        }
    }
    
     
    return 0;
}