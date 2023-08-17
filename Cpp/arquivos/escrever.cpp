#include <iostream>
#include <fstream>

int main(){
    std::ofstream arquivo("escrita.txt",std::ios::app);
    arquivo <<"\nagora está fazendo append";

}


int sobreescreve(){ //apaga tudo e sobreescreve
    std::ofstream arquivo("escrita.txt");
    arquivo << "exemplo de texto";  
    arquivo.close();
}