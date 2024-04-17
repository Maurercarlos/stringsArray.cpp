//Declare uma variável do tipo String chamada nome e armazene seu nome nela. 
//Imprima o valor de nome usando cout.

#include <iostream>
#include <string>
using namespace std;

int main(){

    string nome;
    cout << "Digite o seu nome: ";
    cin >> nome;
    cout << "Seu nome é" << nome << endl;

    return 0;

}