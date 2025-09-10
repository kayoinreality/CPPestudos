#include <iostream>
#include <string>

void mostrarsaudacao(std::string nome) {
    std::cout << "--------------------" << std::endl;
    std::cout << "Bem-vindo, "<< nome << std::endl;
    std::cout << "--------------------" << std::endl;
}

int main() {
    std::string nome;

    std::cout << "Digite seu nome: ";
    std::getline(std::cin, nome);

    //std::cout << "O programa começou." << std::endl;
    mostrarsaudacao(nome);
    //std::cout << "O programa terminou." << std::endl;
    return 0;
}