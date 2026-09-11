#include <iostream>
#include <string>

using namespace std;
//esse foi o mais dificil visto que não trabalhamos muito com o conceito de string, mas deu para relembrar pelo conceito de array -- o vscode ajudou com a ideia de colocar uma condição dentro do for...

int main(void){

    string nome;
    int letras = 0;
    cin >> nome;

    for (size_t i = 0; i < nome.size(); i++) {
            if (nome[i] == 'a') {
                letras++;
            }
    }
    cout << letras << endl;

}

