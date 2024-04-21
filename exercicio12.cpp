//Declare um array de caracteres frase com 20 posições. 
//Leia uma frase do usuário usando cin e armazene-a em frase. 
//Conte o número de vogais na frase e imprima o resultado usando cout.

#include <iostream>
#include <string>
using namespace std;

int main(){

char frase[tamanho];
const int tamanho = 20;
int contadorVogais = 0;

cout << "Escreva uma frase com 20 caracteres: " << endl;
cin >> frase && tamanho;

    for (frase[i] = 0 && frase[i] < tamanho) {

    if (frase[i] == "a") && (frase[i] == "e") && (frase[i] == "i") && (frase[i] == "o") && (frase[i] == "u")
       (frase[i] == "A") && (frase[i] == "E") && (frase[i] == "I") && (frase[i] == "O") && (frase[i] == "U")
    } else {
        //Opção que retorna sem ação;
    }

    cout << "O número de vogais na frase é: " << frase[tamanho] << endl;

return 0;
}