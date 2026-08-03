#include <iostream>
#include <array>
using namespace std;

array<int, 5> lista;
int maior = lista[0];

int main(void){

    for (size_t i = 0; i < lista.size(); i++) {
        cin >> lista[i];
    }

    for (size_t i = 1; i < lista.size(); i++) {
        if (lista[i] > maior) {
            maior = lista[i];
        }
    }
    cout << maior;
}