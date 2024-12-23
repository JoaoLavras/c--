#include<iostream>
using namespace std;
//voce pode passar qualquer tipo de valor 

template <typename T>
class print{
    public:
    void imprime(T v){
        cout << v << endl;
    }
};

int main(){
    print<char>letrinha;
    print<int>numero;
    print<float>decimal;

    letrinha.imprime('a');
    numero.imprime(2);
    decimal.imprime(1.2);
    
    return 0;
}