#include <iostream>
using namespace std;

int main(){
    /*
    Matriz sao arrays de arrays;
    */

    //definindo a matriz 3x3:
    int matriz[3][3];
    //adicionando valores a matriz:
    for(int linha = 0;linha<3;linha++){
        for(int coluna = 0;coluna<3;coluna++){
            cin >> matriz[linha][coluna];
        }
    }
    //printando a matriz:
    for(int linha = 0;linha<3;linha++){
        for(int coluna = 0;coluna<3
        ;coluna++){
            cout << matriz[linha][coluna] << " ";
        }
        cout << endl;
    }
}
