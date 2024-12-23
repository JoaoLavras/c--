/*1. Implemente uma lista encadeada simples em C++ que armazene números inteiros. Crie
uma função para inserir um novo elemento no final da lista.*/

#include<iostream>
using namespace std;

class No{
    public:
    int valor;
    No* proximo;
};

class ListaEncadeada{
    private:
        No* PrimeiroNo = nullptr;
    public:
        ListaEncadeada(){}
    
    void InserirNumero(int num){
        No* NovoNo = new No();
        NovoNo -> valor = num;

        if(PrimeiroNo == nullptr){
            PrimeiroNo = NovoNo;
        }
        else{
            No* atual;
            atual = PrimeiroNo;//sempre 1

            //a partir do 3 entra aqui
            while(atual->proximo!=nullptr){
                atual = atual ->proximo;
            }
            atual-> proximo = NovoNo;
        } 
    }

    void ImprimeLista(){
        No* percorre;
        percorre = PrimeiroNo;

        while(percorre->proximo != nullptr){
            cout << percorre->valor << endl;
            percorre = percorre -> proximo;
        }
        
    }
};

int main(){
    ListaEncadeada inteiros;
    inteiros.InserirNumero(1);
    inteiros.InserirNumero(2);
    inteiros.InserirNumero(3);
    inteiros.InserirNumero(4);
    inteiros.InserirNumero(5);

    inteiros.ImprimeLista();
    
    return 0;
}