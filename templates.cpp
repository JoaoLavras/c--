//Templates permitem que você escreva funções e classes genéricas que podem operar com qualquer tipo de dado.

#include <iostream>
using namespace std;

template <typename T>
T soma(T dado1,T dado2){
    return dado1 + dado2;
}


int main(){
    cout << soma<int>(2,3) << endl;
    cout << soma<char>('a','a') << endl;
    cout << soma<float>(0.2,0.3) << endl;
    cout << soma<string>("joao","antonio");

    return 0;
}