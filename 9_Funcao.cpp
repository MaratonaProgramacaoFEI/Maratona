//METODO1:

#include <iostream>
using namespace std;

int a,b; //ao definir variaveis fora da main, tornam-se globais, de modo que todos podem acessa-la;

void soma(){
    //a funcao, ao ser chamada, retorna a soma de dois valores recebidos na main;
    cout << "Soma entre os dois numeros: " << a + b << endl;
}



int main(){
    /*
    Uma função é um bloco de código responsável por realizar algo bem específico dentro
    de um programa, como fazer uma conta por exemplo;
    Ha duas maneiras de fazer uma funcao;
    */
    
    //recebendo os numeros:
    cout << "Digite o primeiro numero: ";
    cin >> a;
    cout << endl;
    cout << "Digite o segundo numero: ";
    cin >> b;
    cout << endl;
    
    soma(); //chama a funcao, o codigo presente nela eh executado;
}

//METODO2:

#include <iostream>
using namespace std;

int a,b; //ao definir variaveis fora da main, tornam-se globais, de modo que todos podem acessa-la;

void soma(); //primeiro define-se a funcao;

int main(){
    /*
    Uma função é um bloco de código responsável por realizar algo bem específico dentro
    de um programa, como fazer uma conta por exemplo;
    Ha duas maneiras de fazer uma funcao;
    */

    //recebendo os numeros:
    cout << "Digite o primeiro numero: ";
    cin >> a;
    cout << endl;
    cout << "Digite o segundo numero: ";
    cin >> b;
    cout << endl;

    soma(); //chama a funcao, o codigo presente nela eh executado;
}

void soma(){
    //a funcao, ao ser chamada, retorna a soma de dois valores recebidos na main;
    cout << "Soma entre os dois numeros: " << a + b << endl;
}
