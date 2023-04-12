#include <iostream>
using namespace std;

int main(){
    /*
    O array eh bem parecido com vector, porem nao possui suas funcoes;
    Funciona como uma lista, armazenagem de dados;
    Tem que ter seu tamanho definido, diferente do vector;
    */

    //definindo um array d 10 elementos;
    //tipo nome[tamanho];
    int arr[10];
    //adicionando valores ao array:
    for(int i = 0;i<10;i++){
        cin >> arr[i];
    }
    //printando o array:
    for(int i = 0;i<10;i++){
        cout << "Elemento 1: " << arr[i] << endl;
    }
}
