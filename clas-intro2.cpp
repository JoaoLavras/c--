#include<iostream>
using namespace std;

class carro{
    public:
    int ano;
    string cor;

    void RecebeAno(int a){
        ano = a;
    }
    
    int MostraAno(){
        return ano;
    }

    void ReceberCor(string c){
        cor = c;
    }

    string MostraCor(){
        return cor;
    }

};

int main(){
    //carro 1
    carro ferrari;
    ferrari.RecebeAno(1998);
    cout << " Esse eh o ano da Ferrari >>" << ferrari.MostraAno() << endl;
    ferrari.ReceberCor("Vermelho");
    cout << " Essa eh a cor da Ferrari >>" << ferrari.MostraCor() << endl;

    //carro 2
    carro lamborguini;
    lamborguini.RecebeAno(2016);
    cout << "Esse eh o ano da Lamborguini >> " << lamborguini.MostraAno() << endl;
    lamborguini.ReceberCor("Roxa");
    cout << "Essa eh a cor da Lamborguini >>" << lamborguini.MostraCor() << endl;

    return 0;

}