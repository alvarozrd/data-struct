#include <iostream> 
using namespace std;

	int soma = 0;
	int resp = 1;
	
	int main(){
		
	while (resp != 0) {
		cin >> resp;
		soma += resp;
	}
	
	cout << soma;
	return 0;
}
