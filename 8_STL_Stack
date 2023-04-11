#include <iostream>
#include <stack> //biblioteca de stack;
using namespace std;

int main(){
    /*
    Stack pode ser considerado o oposto de queue;
    Poderia ser comparado a uma pilha de livros;
    Pense numa mesa, você deseja empilhar livros. Stack é como se fosse o “empilhar”;
    Função size(): retorna o tamanho;
    Função top(): pega o próximo elemento;
    Note que ao printar a stack, os elementos sao deletados depois de printados;
    */

    //Criando a stack:
    stack<int>stk;
    //Adicionando valores:
    stk.push(3);
    stk.push(323);
    stk.push(12);
    stk.push(412);
    stk.push(0);
    //Printando o primeiro elemento:
    cout << "Primeiro elemento: " << stk.top() << endl;
    //Printando o tamanho da stack:
    cout << "Tamanho da stack: " << stk.size() << endl;

    //Imprimindo a stack:
    while(!stk.empty()){
        cout << stk.top() << " ";
        stk.pop();
    }
    cout << endl;
}
