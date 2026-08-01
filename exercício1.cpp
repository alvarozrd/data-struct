#include <iostream>
#include <array>
using namespace std;

int main()
{
	array<int, 5> notas;
	int total = 0;
	
	for(int i = 0; i <5; ++i)
		cin >> notas[i];
		
	for(int i = 0; i <5; ++i)
		if(notas[i] > 7) total += 1;
		
	cout << total;
	return 0;
}
