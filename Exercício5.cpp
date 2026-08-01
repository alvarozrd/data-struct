#include <iostream>
using namespace std;

	void trocar(int &a, int &b) { int x; x = a; a = b; b = x; }
	
	int main(void){
	
		int a, b;
		cin >> a;
		cin >> b;
		trocar(a, b);
		
		cout << a << " " << b;
	return 0;
}
