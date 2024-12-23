#include <iostream>
using namespace std;

template <typename T1,typename T2>
class Par{
    public:
    T1 primeiro;
    T2 segundo;

    //Construtor: inicializador de membros da classe
    // primeiro recebe p, segundo recebe s
    Par(T1 p, T2 s): primero(p),segundo(s) {}
};

int main(){
    //nao esquecer de indentificar cada um dos parametros repassados
    Par <int,double> ordenado(2,3.2);
    
    //acessando cada um desses dados
    cout << "x: " << ordenado.primeiro << ", y: "<< ordenado.segundo << endl;

    return 0;
}