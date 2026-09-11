#include <iostream>
using namespace std;

int x = 7;
int *ptr_x = &x;

int main(void){
    *ptr_x = 21;
    cout << *ptr_x << endl;
    cout << &x << endl;
    return 0;
}