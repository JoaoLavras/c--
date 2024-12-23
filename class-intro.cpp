#include <iostream>
using namespace std;

class propaganda{ //conjunto de funções com objetivo unico

    private://armazena  objetos que so podem ser acessados pela class(geralmente manipulados apenas dentro da class)

    //publica, posso chamar no main
    public:

    void inscrever(){
        cout<< "Se inscreva no canal do professor douglas" << endl;
    }

    void curta(){
        cout << "Curta esse video!" << endl;
    }
};

int main(){
    //sempre dar nome ao objeto
    propaganda canal; //canal foi o objeto que criei

    //chamei funções através dos objetos
    canal.inscrever();
    canal.curta();

    return 0;
}