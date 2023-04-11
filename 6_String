#include <iostream>
#include <algorithm> //para usar reverse e sort;
using namespace std;

int main(){
    /*
    String eh um objeto que nao esta contido em C diretamente, mas em C++ eh uma variavel comum;
    Ha duas maneiras de receber uma string de um usuario;
    Quando for receber apenas uma palavra, usar cin;
    Quando for receber uma frase, usar getline;
    String possui algumas funcoes interessantes, serao mostradas a seguir;
    Para receber usando getline, usar sempre o "cin.ignore()" antes, para nao pegar lixo de memoria;
    Usar sempre o cout para printar strings;
    Como uma string eh um array de char, podemos manipula-la normalmente, mexendo em char's;
    */

    string strfrase;
    string strpalavra;
    //Recebendo palavra:
    cin >> strpalavra;
    cout << "Palavra digitada: " << strpalavra << endl;
    cin.ignore();
    //Recebendo uma frase:
    getline(cin,strfrase);
    cout << "Frase digitada: " << strfrase << endl;
    //Funcoes importantes:
    cout << "Tamanho da palavra: " << strpalavra.size() << endl; //retorna o tamanho da string;
    //Printando 0 se a letra digitada for 'e':
    for(int i = 0;i<strpalavra.size();i++){
        if(strpalavra[i] == 'e'){
            continue;
        }
        else{
            cout << strpalavra[i] << " ";
        }
    }
    cout << endl;
    //Printando uma string ao contrario:
    reverse(strpalavra.begin(),strpalavra.end());
    cout << "Palavra ao contrario: " << strpalavra << endl;
    //Palavra organizada em ordem alfabetica:
    sort(strpalavra.begin(),strpalavra.end());
    cout << "Palavra em ordem alfabetica: " << strpalavra << endl;
}
