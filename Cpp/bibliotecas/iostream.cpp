#include <iostream>

int main()    
{   std::cout << "Print simples" << std::endl;
    std::cout << "Agora nao temos "; 
    std::cout << "quebra de linha"<<std::endl;
    //vamos pegar inputs do usuário
    std::string  nome; int idade;
    std::cin >> nome >> idade;
    std::cout << nome << idade <<std::endl;
}