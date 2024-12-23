#include <iostream>
using namespace std;
//continue = ignora o comando e pula para a proxima interação!!
int main(){
    int i;

    for(i=1;i<10;i++){
        if(i == 4){
            continue;
        }
        cout << i << endl;
    }

    return 0;
}