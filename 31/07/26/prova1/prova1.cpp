#include <iostream>

using namespace std;

	void dobrar (int x) { x = x * 2; }
	void dobrarRef (int& x) { x = x * 2; }
	
		int misterio (int n) {
		if(n == 0) return 0; 
		return misterio (n - 1) + 2;
	}
	
int main(void){
	//exercicio 1
	cout << "Exercicio 1.\n";
	int a = 7, b = 2, c = 5, d = 5;
	cout << a / b << " " << a % b;
	cout << endl << endl;
	
	//exercício 2
	cout << "Exercicio 2.\n";
	int soma = 0;
	for (int i = 1; i <= 5; i++) {
		if (i % 2 == 0) soma += i;
	}
	cout << soma;
	cout << endl << endl;
	
	//exercício 3
	cout << "Exercicio 3.\n";
	
	dobrar(c);
	dobrarRef(d);
	cout << c << " " << d;
	cout << endl << endl;
	
	//exercicio 4
	cout << "Exercicio 4.\n";
	int v[5] = {3, 9, 4, 1, 5};
	int maior = v[0];
	for(int i = 1; i < 5; i++){
		if(v[i] > maior) maior = v[i];
	}
	cout << maior;
	cout << endl << endl;
	
	//exercicio5
	cout << "Exercicio 5.\n";
		
	cout << misterio(4);
	cout << endl;
	
return 0;

}
