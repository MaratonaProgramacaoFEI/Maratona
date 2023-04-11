#include <iostream>
#include <set> //biblioteca de set;
using namespace std;

int main(){
    /*
    Set é um tipo de vector, mas guarda elementos únicos. Tais elementos não podem ser modificados uma vez dentro do set;
    Possui diversas funções, sua implementação exige métodos diferentes dos de vector;
    O set possui várias funções, como size e clear(para limpar o set);
    */
    
    //Criando um set:
    set<int>s;
    s.insert(1); //insert eh usado para adicionar valores no set;
    s.insert(2);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(55);
    s.insert(1212);

    //Printando o tamanho do set:
    //Note que adicionamos varios "2", mas ele so adiciona 1;
    cout << "Tamanho do set: " << s.size() << endl;

    //Printando o set:
    for(auto i = s.begin();i != s.end();i++){
        cout << *i << " ";
    }
    cout << endl;
}
