#include <iostream>
#include <fstream>

int main(){
    std::fstream arquivo;
    //temos uma variavel chamada arquivo
    //que podemos alterar o modo através
    //do open("nome do arquivo",modo)
    //devemos sempre fechar com arquivo.close()
    arquivo.open("leitura_e_escrita.txt",std::ios::in);
    std::string linha;
    while (getline(arquivo,linha)){
        std::cout << linha << std::endl ;
    }    
    arquivo.close();
    arquivo.open("leitura_e_escrita.txt",std::ios::app);
    arquivo << "\nessa linha é nova! (append)";
    arquivo.close();
    return 0;
}