#include <iostream>
using namespace std;

bool ehPar(int n) {
    return n % 2 == 0;
}

int main(void) {
    int n; 
    
    cin >> n;
	cout << boolalpha << ehPar(n) << endl;
    
    return 0;
}