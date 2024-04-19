//Declare uma variável do tipo String chamada letra. 
//Leia um caractere do usuário usando cin e armazene-o em letra. 
//Verifique se letra é uma vogal usando a estrutura if e imprima uma mensagem informando se é ou não.


#include <iostream>
#include <string>
using namespace std;

int main(){

    string letra;
    cout << "Digite a sua letra: ";
    cin >> letra;

    if (letra == "a") {
        cout << "É uma vogal";
    } else if (letra == "e") {
        cout << "É uma vogal";
    } else if (letra == "i") {
        cout << "É uma vogal";
    } else if (letra == "o") {
        cout << "É uma vogal";
    } else if (letra == "u") {
        cout << "É uma vogal";
    } cout << "Não é uma vogal";
    
     return 0;

}