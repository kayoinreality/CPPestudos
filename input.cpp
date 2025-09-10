#include <string>
#include <iostream>

/*int main() { //responde na frente
  std::string nome;
    std::cout << "Digite seu nome: ";
    std::cin >> nome;
    std::cout << "Olá, " << nome << std::endl;
}*/

/*int main() {
    std::string nome;
    std::cout << "Digite seu nome: " << std::endl; //pula para a próxima linha
    std::getline (std::cin, nome);
    std::cout << "Olá, " << nome << std::endl;
    return 0;
}*/

int main() {
    int idade;
    std::cout << "Digite sua idade: ";
    std::cin >> idade;

    if (idade >= 18) {
        std::cout << "Você é maior de idade." << std::endl;
    } else {
        std::cout << "Você é menor de idade." << std::endl;
    }
    return 0;
}