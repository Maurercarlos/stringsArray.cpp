//Declare um array de caracteres dias com 7 posições. Armazene manualmente os nomes dos 7 dias da semana nas posições do array. 
//Leia um número do usuário entre 1 e 7 usando cin. 
//Imprima o dia da semana que está na posição informada pelo usuário usando cout.


#include <iostream>
#include <string>
using namespace std;

int main(){

    string dias[7] = {"domingo", "segunda", "terça", "quarta", "quinta", "sexta", "sábado"};

    cout << "A seguir os dias da semana: " << endl;

    cout << dias[0] << endl;
    cout << dias[1] << endl;
    cout << dias[2] << endl;
    cout << dias[3] << endl;
    cout << dias[4] << endl;
    cout << dias[5] << endl;
    cout << dias[6] << endl;

    int num;

    cout << "Digite um número de 0 a 6: " << endl;
    cin >> num;

    if(num == 0) {
    cout << "Seu dia da semana selecionado é: " << dias[0] << endl;
} else if(num == 1) {
    cout << "Seu dia da semana selecionado é: " << dias[1] << endl;
} else if (num == 2) {
    cout << "Seu dia da semana selecionado é: " << dias[2] << endl;
} else if (num == 3) {
    cout << "Seu dia da semana selecionado é: " << dias[3] << endl;
} else if (num == 4) {
    cout << "Seu dia da semana selecionado é: " << dias[4] << endl;
} else if (num == 5) {
    cout << "Seu dia da semana selecionado é: " << dias[5] << endl;
} else if (num == 6) {
    cout << "Seu dia da semana selecionado é: " << dias[6] << endl;
} else if (num == 7) {
    cout << "Seu dia da semana selecionado é: " << dias[7] << endl;
}



    return 0;
}
