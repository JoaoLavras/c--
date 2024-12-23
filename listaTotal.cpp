#include <iostream>
using namespace std;

class No {
public:
    int valor;
    No* proximo; //esse atributo guarda um ponteiro para o próximo nó da lista(ou nullptr caso ele for ultimo)

    //construtor: define o valor do nó e inicializa o ponteiro proximo(indica que o nó nao aponta para ninguem no momento da criação)
    No(int v) : valor(v), proximo(nullptr) {}
};

class ListaEncadeada {//gerencia a lista encadeada
private:
    No* cabeca; //ponteiro que aponta para primeiro nó da lista

public:
    ListaEncadeada() : cabeca(nullptr) {} //construtor

    void inserirNoInicio(int novoValor) {
        No* novoNo = new No(novoValor);//ele cria um nó com o valor passado por parametro
        novoNo->proximo = cabeca; //o novo nó vira a cabeça e o proximo vira o antigo nó
        cabeca = novoNo; //no topo fica inserido o novo nó adicionado
    }

    void inserirNoFim(int novoValor) {
        No* novoNo = new No(novoValor);

        if (cabeca == nullptr) {
            cabeca = novoNo;
        } else {
            No* temp = cabeca;
            while (temp->proximo != nullptr) {
                temp = temp->proximo;
            }
            temp->proximo = novoNo;
        }
    }

    void removerNo(int valorParaRemover) {
        if (cabeca == nullptr) return;

        if (cabeca->valor == valorParaRemover) {
            No* temp = cabeca;
            cabeca = cabeca->proximo;
            delete temp;
            return;
        }

        No* atual = cabeca;
        while (atual->proximo != nullptr && atual->proximo->valor != valorParaRemover) {
            atual = atual->proximo;
        }

        if (atual->proximo == nullptr) return;

        No* temp = atual->proximo;
        atual->proximo = atual->proximo->proximo;
        delete temp;
    }

    void imprimirLista() {
        No* temp = cabeca;
        while (temp != nullptr) {
            cout << temp->valor << " -> ";
            temp = temp->proximo;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    ListaEncadeada lista;

    lista.inserirNoInicio(10);
    lista.inserirNoInicio(20);
    lista.inserirNoFim(30);
    lista.imprimirLista();

    lista.removerNo(20);
    lista.imprimirLista();

    return 0;
}
