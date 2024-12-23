#include <iostream>
#include <cstddef>
using namespace std;

int main(){
    int* pont2;
    pont2 = NULL; //vazio para nao atrapalhar com lixos de memoria;
    cout << pont2;
    cout << *pont2;

    return 0;
}