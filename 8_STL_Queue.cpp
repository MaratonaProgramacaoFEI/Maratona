#include <iostream>
#include <queue> //biblioteca de queue;
using namespace std;

int main(){
    /*
    Queue é um tipo de armazenamento que segue princípios de uma fila (fila de banco, supermercado, etc.);
    O valor entra sempre na última posição e o valor a sair é sempre o primeiro da queue (posição 0);
    Função clear(): Limpa a queue;
    Função front(): Pega o valor da frente;
    Função back(): Pega o elemento de trás;
    Função size(): Retorna o tamanho da queue;
    Note que ao printar a queue, os elementos sao deletados depois de printados;
    */

    //Criando a queue:
    queue<int>q;
    //Adicionando valores:
    q.push(2);
    q.push(2131);
    q.push(1271);
    q.push(1);
    q.push(1);
    //Pegando primeiro elemento:
    cout << "Primeiro elemento da queue: " << q.front() << endl;
    //Pegando o ultimo elemento:
    cout << "Ultimo elemento da queue: " << q.back() << endl;
    //Pegando o tamanho:
    cout << "Tamanho da queue: " << q.size() << endl;
    //Printando a queue:
    cout << endl;
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}
