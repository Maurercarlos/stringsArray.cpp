//Declare um array de caracteres animais com 10 posições. 
//Armazene manualmente os nomes de 10 animais nas posições do array. 
//Leia um caractere do usuário usando cin. 
//Verifique se o caractere é a primeira letra de um animal do array. 
//Se for, imprima o nome do animal completo.

#include <iostream>
#include <string>
using namespace std;

int main(){

    string animais[10] = {"camaleao", "girafa", "leopardo", "peixe", "papagaio", "caturrita", "canguru", "cachorro", "gato", "macaco"};

cout << "A seguir há 10 escolhas de animais: " << endl;

cout << animais[0] << endl;
cout << animais[1] << endl;
cout << animais[2] << endl;
cout << animais[3] << endl;
cout << animais[4] << endl;
cout << animais[5] << endl;
cout << animais[6] << endl;
cout << animais[7] << endl;
cout << animais[8] << endl;
cout << animais[9] << endl;

int num;

cout << "Digite um número de 0 a 9: " << endl;
cin >> num;

//animais[x]
if(num == 0){
    cout << "Seu animal selecionado é: " << animais[0] << endl;
} else if(num == 1) {
    cout << "Seu animal selecionado é: " << animais[1] << endl;
} else if (num == 2) {
    cout << "Seu animal selecionado é: " << animais[2] << endl;
} else if (num == 3) {
    cout << "Seu animal selecionado é: " << animais[3] << endl;
} else if (num == 4) {
    cout << "Seu animal selecionado é: " << animais[4] << endl;
} else if (num == 5) {
    cout << "Seu animal selecionado é: " << animais[5] << endl;
} else if (num == 6) {
    cout << "Seu animal selecionado é: " << animais[6] << endl;
} else if (num == 7) {
    cout << "Seu animal selecionado é: " << animais[7] << endl;
} else if (num == 8) {
    cout << "Seu animal selecionado é: " << animais[8] << endl;
} else if (num == 9) {
    cout << "Seu animal selecionado é: " << animais[9] << endl;
}

return 0;
}