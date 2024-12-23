#include <iostream>
using namespace std;

int main(){
    int x = 0;

    cout << "Digite um numero >>";
    cin >> x;

    if(x > 0){
        cout << "Numero positivo" << endl;
    }
    else{
        cout << "Numero negativo" << endl;
    }
    return 0;
}