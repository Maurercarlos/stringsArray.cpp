//Declare um array de caracteres palavra1 e palavra2 com 10 posições cada. 
//Leia duas palavras do usuário usando cin e armazene-as em palavra1 e palavra2. 
//Compare as duas palavras usando a estrutura if e imprima qual palavra é maior em ordem alfabética.

#include <iostream>
#include <string>
using namespace std;
#include <cstring>

int main(){

    char palavra1[10];
    char palavra2[10];

    cout << "Escreva sua primeira palavra: " << endl;
    cin >> palavra1;

    cout << "Escreva sua segunda palavra: " << endl;
    cin >> palavra2;

    int comparacao = strcmp(palavra1, palavra2);

    if (comparacao > 0) {
        cout << "A primeira palava " << palavra1 << " vem antes da segunda palavra " << palavra2 << endl;
    } else if (comparacao < 0) {
        cout << "A segunda palavra " << palavra2 << " vem antes da primeira palavra " << palavra1 << endl;
    } else if (comparacao == 0) {
        cout << "As duas palavras são iguais." << endl;
    }
        return 0;
    }