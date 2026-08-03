#include <iostream> 
using namespace std;

	int maximo (int a, int b){
		if (a > b) 
			return a;
		else 
			return b;
	}
	
	int main(void){
	
	int a, b, resultado;
		
		cin >> a;
		cin >> b;
		resultado = maximo(a, b);
		
		cout << resultado << endl;
	return 0;
}
		
