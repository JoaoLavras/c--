#include<iostream>
using namespace std;

class carro { //carro como objeto
    public: //caracteristicas publicas
    string cor;
    string modelo;
    int ano;

    void acelerar(){
    }

    void frear(){
    }

};

int main(){
    carro meuCarro;
    meuCarro.cor = "Vermelho";
    meuCarro.modelo = "Sedan";
    meuCarro.ano = 2023;

    meuCarro.acelerar();
    meuCarro.frear();

    return 0;

}