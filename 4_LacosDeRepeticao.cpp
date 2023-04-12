#include <iostream>
using namespace std;

int main(){
    /*
    Os lacos de repeticao sao utilizados para realizar uma mesma tarefa varias vezes;
    for: o for eh utlizado para repetir uma tarefa uma certa quantidade de vezes;
    while: o while eh como o for, mas possui um artificio que permite que tenha condicoes de parada;
    */

    //Contando ate 10 com os dois tipos de lacos de repeticao:
    //for:
    for(int i = 0;i<=10;i++){
        cout << i << " ";
    }
    cout << endl;
    //while:
    int x = 0;
    while(x<=10){
        cout << x << " ";
        x = x + 1;
    }
    cout << endl;

    //Contando de 10 a 0:
    //for:
    for(int i = 10;i>=0;i--){
        cout << i << " ";
    }
    cout << endl;
    //while:
    int y = 10;
    while(y>=0){
        cout << y << " ";
        y = y -1;
    }
    cout << endl;
}
