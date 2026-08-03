#include <iostream>
using namespace std;

array<int, 10> pao = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int main(void){

    for (size_t i = 9; i < pao.size(); i--) {
        cout << pao[i] << endl;
    }
}