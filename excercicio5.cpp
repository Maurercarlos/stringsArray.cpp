//Declare um array de caracteres frase com 20 posições. 
//Leia uma frase do usuário usando cin e armazene-a em frase. 
//Imprima a frase usando cout.


#include <iostream>
#include <string>
using namespace std;

int main(){

    string frase;
    cout << "Digite a sua frase: ";
    cin >> frase; 

    cout << frase << endl;

    return 0;

}