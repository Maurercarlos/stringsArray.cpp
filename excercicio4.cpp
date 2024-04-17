//Declare um array de caracteres palavra com 10 posições. 
//Leia uma palavra do usuário usando cin e armazene-a em palavra. 
//Imprima a palavra usando cout.


#include <iostream>
#include <string>
using namespace std;

int main(){

    char palavra[10];
    cout << "Digite a sua palavra: ";
    cin >> palavra;

    cout << palavra << endl;
    //cout << palavra[0] << endl; <- Para achar posições nas palavras digitadas; 

return 0;
}