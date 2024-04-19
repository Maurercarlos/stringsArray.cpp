//Declare um array de caracteres frutas com 5 posições. 
//Armazene manualmente os nomes de 5 frutas nas posições do array. 
//Imprima a fruta que está na posição 3 do array usando cout.

#include <iostream>
#include <string>
using namespace std;

int main(){

char frutas[5];

cout << frutas[0] << "lima" << endl;
cout << frutas[1] << "melancia" << endl;
cout << frutas[2] << "pera" <<  endl;
cout << frutas[3] << "pesego" << endl;
cout << frutas[4] << "maca" << endl;

cout << "Fruta da posição 3 é: " << frutas[3] << "pesego" << endl;

return 0; 

}