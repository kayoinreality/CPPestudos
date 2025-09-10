#include <vector>
#include <iostream>
#include <string>

int main() {
    std::vector <int> notas;

    notas.push_back(10);
    notas.push_back(8);
    notas.push_back(9); 

    for (int numero : notas) {
        std::cout << numero << std::endl;
    }
}