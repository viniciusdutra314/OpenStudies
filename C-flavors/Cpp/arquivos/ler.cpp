#include <iostream>
#include <fstream>

int main(){
    std::ifstream arquivo("leitura.txt");
    if (! arquivo.is_open()){
        std::cout <<"não abriu o arquivo";
        return 1;
    }
    std::string linha;
    while (std::getline(arquivo,linha)){
        std::cout << linha <<std::endl;
    }
    arquivo.close(); return 0;
}