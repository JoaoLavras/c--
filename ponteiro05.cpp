//vazamento de memoria
#include <iostream>
#include <cstddef>
using namespace std;

int main(){
    int var1=5;
    int* pont3 = new int; //pegar um espaço int qualquer e apontar
    int* pont1;

    pont1 = &var1;
    *pont3 = 35;

    delete pont3; //deleta endereço do pont3
    pont3 = pont1;
    //variavel que tinha sido escolhida aleatoriamente vai ser perdida, logo causará um vazamento de dados

    cout << pont3 << endl;
    cout << pont1 << endl;

    cout << *pont3 << endl;
    cout << *pont1 << endl;
    //para evitar use 'delete'

    return 0;
}