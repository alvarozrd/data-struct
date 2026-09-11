#include <iostream>
#include <array>
using namespace std;

int main(void){
    array<int, 10> valores = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    bool encontrou = false;
    int meio = valores.size() / 2;
    int valor;

    cout << "Digite um valor para procurar: ";
        cin >> valor;
        cout << meio << endl;
        cin.ignore(80, '\n');

    while (encontrou == false){
        if (valor == valores[meio])
            encontrou = true;
        else if (valor < valores[meio])
            meio = meio / 2;       
        else if (meio == 0 || meio == valores.size() - 1)
            break;
        else 
            meio = (meio + valores.size()) / 2;
    }
    if (encontrou)
        cout << "O valor " << valor << " foi encontrado no indice: " << meio << endl;
    else
        cout << "O valor " << valor << " nao foi encontrado" << endl;


    cout << "Tecle enter para sair..." << endl;
    cin.get();
    return 0;
}