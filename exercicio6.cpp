//Declare um array de caracteres numeros com 10 posições. 
//Armazene manualmente os números de 1 a 10 nas posições do array. 
//Imprima os números pares do array em linhas separadas usando cout.


#include <iostream>

using namespace std;

int main(){
    int numeros[10];
                  
    cout << "Digite o seu número";
    cin >> numeros[0];
    cout << "Digite o seu número";
    cin >> numeros[1];
    cout << "Digite o seu número";
    cin >> numeros[2];
    cout << "Digite o seu número";
    cin >> numeros[3];
    cout << "Digite o seu número";
    cin >> numeros[4];
    cout << "Digite o seu número";
    cin >> numeros[5];
    cout << "Digite o seu número";
    cin >> numeros[6];
    cout << "Digite o seu número";
    cin >> numeros[7];
    cout << "Digite o seu número";
    cin >> numeros[8];
    cout << "Digite o seu número";
    cin >> numeros[9];
    cout << "Digite o seu número";
    cin >> numeros[10];

    if ((numeros[0] % 2 ) == 0) {
        cout << "Seu número é par" << endl;
    } else if ((numeros[1] % 2) == 0) {
        cout << "Seu número é par" << endl;
    } else if ((numeros[2] % 2) == 0) {
        cout << "Seu número é impar" << endl;
    } else if ((numeros[3] % 2) == 0) {
        cout << "Seu número é par" << endl;
    } else if ((numeros[4] % 2) == 0) {
        cout << "Seu número é impar" << endl;
    } else if ((numeros[5] % 2) == 0) {
        cout << "Seu número é par" << endl;
    } else if ((numeros[6] % 2) == 0) {
        cout << "Seu número é impar" << endl;
    } else if ((numeros[7] % 2) == 0) {
        cout << "Seu número é par" << endl;
    } else if ((numeros[8] % 2) == 0) {
        cout << "Seu número é impar" << endl;
    } else if ((numeros[9] % 2) == 0) {
        cout << "Seu número é par" << endl;
    } 
    return 0;
}