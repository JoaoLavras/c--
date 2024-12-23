#include<iostream>
using namespace std;

class No{
    public:
    int valor;
    No* proximo = nullptr;
    //No* anterior = nullptr;
};

class ListaEncadeada1{
    private:
    No* PrimeiroNo = nullptr; //criamos um No chamado PrimeiroNo

    public:
    //construtor
    ListaEncadeada1(){}

    void inserirFinal(int num){
        No* novoNo = new No();//Criamos um novo No chamado de novoNo
        novoNo -> valor = num;

        if(PrimeiroNo==nullptr){
            PrimeiroNo = novoNo;
        } 
        else{
            No* atual; //cirou um novo ponteiro No de nome bloco
            atual = PrimeiroNo;
            //percorrer a lista encadeada até o ultimo nó (o ultimo nó é sempre nullptr)
            //verifica se o bloco atual tem um bloco próximo
            while(atual -> proximo != nullptr){
            //o ponteiro bloco passa a apontar para o próximo nó da lista.
                atual = atual -> proximo;
            }
            atual -> proximo = novoNo;
        }
    }

    void imprimirLista(){
            No* blocopercorre;
            blocopercorre = PrimeiroNo;

            while(blocopercorre != nullptr){
                cout << blocopercorre->valor << endl;
                blocopercorre = blocopercorre-> proximo ;
            }
        }
};


int main(){
    ListaEncadeada1 numero;
    numero.inserirFinal(1);
    numero.inserirFinal(2);

    numero.imprimirLista();

    return 0;
}