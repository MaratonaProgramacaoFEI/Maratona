#include <iostream>
using namespace std;

int main(){
    /*
    Estruturas condicionais sao utilizadas para realizar algum tipo de codigo se alguma condicao for verdade;
    "==" : x eh igual a y;
    ">" > x eh maior que y;
    "<" : x eh menor que y;
    ">=" : x eh maior ou igual a y;
    "<=" : x eh menor ou igual a y;
    "||" : ou;
    "&&" : e;
    */

    //Exemplo if:
    int num = 10;
    if(num == 10){
        cout << "Num equivale a 10!" << endl;
    }
    //Exemplo else:
    int num2 = 3;
    if(num2 == 10){
        cout << "Num2 equivale a 10!" << endl;
    }
    else{
        cout << "Num2 nao equivale a 10!" << endl;
    }
    //Exemplo else if:
    int num3 = 20;
    if(num3 == 10){
        cout << "Num3 equivale a 10!" << endl;
    }
    else if(num3 == 20){
        cout << "Num3 equivale a 20!" << endl;
    }
    else{
        cout << "Num3 nao equivale a 10!" << endl;
    }
    //Exemplo de maior, menor:
    int n1 = 1, n2 = 0;
    if(n1 > n2){
        cout << "N1 eh maior que n2" << endl;
    }
    else{
        cout << "N1 eh menor que n2" << endl;
    }
    //Exemplo de &&:
    int v1 = 10, v2 = 5;
    if(v1 == 10 && v2 == 5){
        cout << "v1 eh igual a 10 e v2 eh igual a 5" << endl;
    }
    //Exemplo de ||:
    int x1 = 1, x2 = 5;
    if(x1 == 5 || x2 == 5){
        cout << "x1 ou x2 eh igual a 5" << endl;
    }
}
