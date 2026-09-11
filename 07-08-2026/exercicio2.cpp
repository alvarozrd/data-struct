#include <iostream>
#include <array>
using namespace std;

int main(){
    array<int, 10> notas = {1, 3, 5, 8888, 8, 23, 54, 345, 342, 12};
    bool encontrou = false;
    int contador = 0;

    for (int i = 0; i < 10; ++i){
        if (notas[i] == 8){
            cout << "A nota 8 foi encontrada no indice: " << i << endl;
            encontrou = true;
            break; 
        }
        contador++;
    }

    if (!encontrou)
        cout << "A nota 6 nao foi encontrada" << endl;

    cout << "Foram feitas " << contador << " comparacoes" << endl;

    cout << "Tecle enter para sair..." << endl;
    cin.get();
    return 0;
}