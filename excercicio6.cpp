//Declare um array de caracteres numeros com 10 posições. 
//Armazene manualmente os números de 1 a 10 nas posições do array. 
//Imprima os números pares do array em linhas separadas usando cout.


#include <iostream>
#include <string>
using namespace std;

int main(){

    char numeros[] = {"0","1","2","3","4","5","6","7","8","9","10"};
    cout << "Digite o seu número";
    cin >> numeros;

    if (numeros == "2") {
        numeros[2] = "Seu número é par";
    } else if (numeros == "4") {
        numeros[4] = "Seu número é par";
    }  else if (numeros == "6") {
        numeros[6] = "Seu número é par";
    } else if (numeros == "8") {
        numeros[8] = "Seu número é par";
    }  else if (numeros == "10") {
        numeros[10] = "Seu número é par";
    } cout << "Seu número é ímpar";


    return 0;

}