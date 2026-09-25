#include <iostream>
using namespace std;

struct No{

    int valor;
    No* esq;
    No* dir;

    No(int v){

        valor = v;

        esq = nullptr;
        dir = nullptr;
    }
};


No* inserir(No* raiz, int valor){
    if(raiz == nullptr) return new No(valor);
    if(valor < raiz->valor)
        raiz->esq = inserir(raiz->esq, valor);
    else if(valor> raiz->valor)
        raiz->dir = inserir(raiz->dir, valor);
    return raiz;
}

int main(void){

        //cria a raiz!!!
        No* raiz = new No(30);

    raiz = inserir(raiz, 15);
    raiz = inserir(raiz, 10);
    raiz = inserir(raiz, 22);
    raiz = inserir(raiz, 45);
    raiz = inserir(raiz, 38);
    raiz = inserir(raiz, 60);
    raiz = inserir(raiz, 27);
    raiz = inserir(raiz, 05);
    raiz = inserir(raiz, 50);
    raiz = inserir(raiz, 33);
    
    // emOrdem(raiz);
    return 0;
}