#include <iostream>

using namespace std;

int main(){
    int var1;
    int* pont1;//tipo da variavel que ele vai apontar e nome do ponteiro

    var1=5;
    pont1 = &var1; //ponteiro vai armazenar o endereço da variavel

    cout << var1 << endl; //valor da variavel
    cout << pont1 << endl; //endereço armazenado
    cout << *pont1 << endl; //valor armazenado no endereço
    return 0;

    int var2;
    //var2 = var1;
    var2 = *pont1; //posso atribuir o valor dessa forma 

    cout << var2;

    return 0;
}