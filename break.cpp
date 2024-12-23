#include <iostream>
using namespace std;
//break = usado para parar o programa e pular para o proximo bloco de comandos 
int main(){
    int i;

    for(i=1;i<10;i++){
        if(i == 4){
            break;
        }
        cout << i << endl;
    }

    return 0;
}
