#include <iostream>

int somar (int num1, int num2) {
    int resultado = num1 + num2;
    return resultado;
}

int main() {
    int num1;
    int num2;
    std::cout << "Digite o primeiro número: ";
    std::cin >> num1;
    std::cout << "Digite o segundo número: ";
    std::cin >> num2;
    std::cout << "O resultado é: " << somar(num1, num2) << std::endl;
    return 0;
}