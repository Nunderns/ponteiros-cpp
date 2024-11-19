#include <iostream>
#include <locale>
using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");

    int contagem = 1;

    cout<<"Valor da variável: "<<contagem<<endl;
    cout<<"Tamanho de kb: "<<sizeof(contagem)<<endl;
    cout<<"Endereço de memória: "<<&cout<<endl;

    return 0;
}