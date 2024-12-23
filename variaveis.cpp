#include <iostream>
using namespace std;

int main(){
    int x = 1;
    char y = 'A'; //CHAR - AASPAS UNICAS
    string r = "pinha"; //STRING ASPAS DUPLAS
    float z = 2.2;
    auto w = 12.4;

    cout << "Tipos de variaveis" << endl;
    cout << x << " >TIPO INTEIRO" << endl;
    cout << y << " >TIPO CHAR" << endl;
    cout << z << " >TIPO FLOAT" << endl;
    cout << r << " >TIPO STRING" << endl;

    auto a = 0;
    auto b = 0;

    cout << "Fazendo testes de soma" << endl;
    cout << "Digite um numero =>";
    cin >> a;
    cout << "Digite outro numero =>";
    cin >> b;
    cout << "a + b = " << a+b << endl;

    return 0;
}