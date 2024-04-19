//Declare um array de caracteres cores com 7 posições. Armazene manualmente os nomes de 7 cores nas posições do array. 
//Leia um número do usuário entre 1 e 7 usando cin. 
//Imprima a cor que está na posição informada pelo usuário usando cout.

#include <iostream>
#include <string>
using namespace std;

int main(){

string cores[7] = {"verde", "amarelo", "preto", "branco", "lilás", "rosa", "laranja"};

cout << "A seguir há 7 cores" << endl;

cout << cores[0] << endl;
cout << cores[1] << endl;
cout << cores[2] << endl;
cout << cores[3] << endl;
cout << cores[4] << endl;
cout << cores[5] << endl;
cout << cores[6] << endl;


int num;

cout << "Digite um número entre 0 e 6: ";
cin >> num;

if(num == 0){
    cout << "Sua cor selecionada é: " << cores[0] << endl;
} else if(num == 1) {
    cout << "Sua cor selecionada é: " << cores[1] << endl;
} else if (num == 2) {
    cout << "Sua cor selecionada é: " << cores[2] << endl;
} else if (num == 3) {
    cout << "Sua cor selecionada é: " << cores[3] << endl;
} else if (num == 4) {
    cout << "Sua cor selecionada é: " << cores[4] << endl;
} else if (num == 5) {
    cout << "Sua cor selecionada é: " << cores[5] << endl;
} else if (num == 6) {
    cout << "Sua cor selecionada é: " << cores[6] << endl;
} 

return 0;
}