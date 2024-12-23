#include <iostream>
using namespace std;

int main(){
    int* pont3 = new int; //criou um espaço inteiro que ele vai apontar, variável sem nome, um espaço qualquer que ele reservou para apontar

    //acessando o valor
    //so acessivel por ponteiro!
    *pont3 = 35;
    cout << *pont3 << endl;
    cout << pont3 << endl;

    return 0;
}