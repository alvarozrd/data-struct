// 1-  Dado o array abaixo, escreva um programa em C++ que calcule e exiba a média, o maior e o menor valor. Use apenas um loop para resolver tudo.

#include <iostream>
#include <array> 

using namespace std;

array<int, 7> notas { 7, 9, 5, 8, 6, 10, 4};
int maior = 0, menor = 0, soma = 0, media;
 
int main(void){
    
    for(size_t i = 0; i <= notas.size(); ++i){
        soma += notas[i];
        
            if(notas[i] > maior){
             maior = notas[i];
            }

            if(notas[i] < menor){
                menor = notas[i];
            }
        }
        media = soma / notas.size();

        cout << "Média: " << media << endl;
        cout << "Maior: " << maior << endl;
        cout << "Menor: " << menor << endl;
        
    
        cout << "Tecle <Enter> para encerrar.";
        cin.get();

    return 0;
}

