// 2 - Escreva uma FUNÇÃO que receba um array e o inverta sem usar um segundo array auxiliar. Em seguida, chame a função no main e imprima o array antes e depois.

#include <iostream> 
#include <array>
using namespace std;

array<int, 10> valores;

void apresentaLista(){
    for (size_t i = 0; i < valores.size(); ++i){
        cout << i + 1 << "o valor: " << valores[i] << endl;
    }
}

void colocaValor(){
    for (size_t i = 0; i < valores.size(); ++ i){
        cout << "Informe o " << i + 1 << "o valor: " << endl;
        cin >> valores[i];
        cin.ignore(80, '\n');
    }
}

void inverterLista(){
    int troca;

    for (size_t i = 0; i < valores.size()/ 2; ++i){
    troca = valores[i];
    valores[i] = valores[valores.size() - 1 - i];
    valores[valores.size() - 1 - i] = troca;
    }
}


int main(void){

    cout << "=============" << endl;
    cout << "Inverte Lista" << endl;


    colocaValor();
    apresentaLista();
    inverterLista();
    apresentaLista();
    return 0;
}