//meus testes
#include<iostream>
using namespace std;

int main(){
    int var1 = 1;
    int* pont1;
    pont1 = &var1;

    //atribuir um novo valor a var1
    *pont1 = 30; // atribui um novo valor a var1
    cout << var1 << endl;
    cout << *pont1 << endl;
    //cout << *pont1 << endl;

    //mudando para onde o ponteiro aponta
    int var2;
    var2 = 50;
    pont1 = &var2;

    cout << *pont1 << endl;

    return 0;
}