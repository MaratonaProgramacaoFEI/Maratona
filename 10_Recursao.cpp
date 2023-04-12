#include <iostream>
using namespace std;

void recursao(int n){
    if(n>0){
        cout << "Isso eh uma recursao!" << endl;
        recursao(n-1);
    }
}

int main(){
    /*
    Uma recursão(ou função recursiva) é uma função, mas ao invés de chamar a função e
    fazer com que realize uma determinada tarefa e então se encerre, a recursão faz algo
    além, a recursão chama ela mesma.
    A recursão não é algo que é utilizado em casos muito gerais, porque é muito mais
    lenta, a presença da recursão é mais vista em casos muito específicos, como grafos por
    exemplo, pois acaba sendo mais simples de resolver por recursão ao invés de usar um
    for ou um while. A recursão pode ser muito utilizada em linguagens de programação
    que não possuem laços de repetição.
    */

    int num;
    cout << "Digite um numero: ";
    cin >> num;

    recursao(num);
}
