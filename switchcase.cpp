#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Digite um numero >>";
    cin >> n;

    switch (n){
        case 1:
        cout<<"Digitou 1" << endl;
        break;
        case 2:
        cout<<"Digitou 2" << endl;
        break;
        case 3:
        cout<<"Digitou 3" << endl;
        break;
        default:
        cout<<"Nao digitou 1,2 ou 3" << endl;
    }
    return 0;
}