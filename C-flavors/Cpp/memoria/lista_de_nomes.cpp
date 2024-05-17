#include <iostream>
#include <string>

int main(){
    int size;
    std::cout <<"Quantidade de nomes"<<std::endl ;
    std::cin >> size;
    std::string* nomes= new std::string[size];
    for (int i=0; i<size; i++){
        std::cout <<i+1 << "º"<< "nome" <<std::endl;
        std::cin >> nomes[i];
    }
    std::cout <<"Vamos printar os nomes"<<std::endl;
    for (int i=0; i<size;i++) {
        std::cout <<nomes[i]<<std::endl;
    }
    delete [] nomes
}