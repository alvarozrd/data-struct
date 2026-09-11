#include <iostream>
#include <array>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<string, int> tabela;

    tabela["um"] = 1;
    tabela["dois"] = 2;
    tabela["tres"] = 3;

    // cout << "Valor: " << tabela["um"] << endl;
    // cout << "Valor: " << tabela["dois"] << endl;
    // cout << "Valor: " << tabela["tres"] << endl;

    array<string, 3> indices = {"um", "dois", "tres"};

    for (int i = 0; i < indices.size(); i++) {
        cout << "Valor: " << tabela[indices[i]] << endl;
    }

    return 0;
}
