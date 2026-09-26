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

bool buscarNo(No* raiz, int valor){
    if(raiz == nullptr) return false;
    if(raiz->valor == valor) return true;
    if(valor < raiz->valor)
        return buscarNo(raiz->esq, valor);
    return buscarNo(raiz->dir, valor);
}

void emOrdem(No* raiz){
    if(raiz == nullptr) return; 
    emOrdem(raiz->esq);
    cout << raiz -> valor << " ";
    emOrdem(raiz->dir);
}

void emPreOrdem(No* raiz){
    if(raiz == nullptr) return; 
    cout << raiz -> valor << " ";
    emPreOrdem(raiz->esq);
    emPreOrdem(raiz->dir);
}

void emPosOrdem(No* raiz){
    if(raiz == nullptr) return; 
    emPosOrdem(raiz->esq);
    emPosOrdem(raiz->dir);
    cout << raiz -> valor << " ";
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
    raiz = inserir(raiz, 5);
    raiz = inserir(raiz, 50);
    raiz = inserir(raiz, 33);

    emOrdem(raiz);
    cout << endl << endl;
    emPreOrdem(raiz);
    cout << endl << endl;
    emPosOrdem(raiz);
    cout << endl << "Busca 22: " << (buscarNo(raiz, 22) ? "encontrado" : "nao encontrado");
    cout << endl << "Busca 99: " << (buscarNo(raiz, 99) ? "encontrado" : "nao encontrado");
    return 0;

    
}