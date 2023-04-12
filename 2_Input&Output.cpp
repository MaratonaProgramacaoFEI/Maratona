#include <iostream>
#include <stdio.h> //biblioteca para usar scanf e printf;
using namespace std;

int main(){
    /*
    Para receber dados do usuario, deve-se utilizar "cin>>variavel;";
    Para printar dados para o usuario, deve-se utilizar "cout<<variavel ou frase;";
    Para pular linha, use "cout << ... << endl; ou usando "\n";
    Podemos usar o cin ou scanf("%d ou %f ou %lf ou %c", &int ou &float ou &double ou &char);
    Podemos usar o cout ou printf("frase");
    Como string nao eh nativa em C, apenas em C++, usa-se mais cin e cout.
    */

    int inteiro;
    float decimal;
    double decdouble;
    char caractere;
    string palavra;

    cin >> inteiro;
    cout << "Esse eh um numero int: " << inteiro << endl;
    cin >> decimal;
    cout << "Esse eh um numero float: " << decimal << endl;
    cin >> decdouble;
    cout << "Esse eh um numero double: " << decdouble << endl;
    cin >> caractere;
    cout << "Esse eh um char: " << caractere << endl;
    cin >> palavra;
    cout << "Essa eh uma string: " << palavra << endl;
    
    scanf("%c", &caractere);
    printf("Esse eh um char: %c\n", caractere);
    scanf("%d", &inteiro);
    printf("Esse eh um int: %d\n", inteiro);
    scanf("%f", &decimal);
    printf("Esse eh um float: %f\n", decimal);
    scanf("%lf", &decdouble);
    printf("Esse eh um double: %lf\n", decdouble);
}
