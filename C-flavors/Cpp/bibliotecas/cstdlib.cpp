//https://www.youtube.com/watch?v=m740X3wtX10
#include <cstdlib>
#include <iostream>
#include <ctime>

void conversao(){
    double num;
    char numero[80];
    std::cin >> numero;
    //usando atof (ASCII to double)
    num = atof(numero);
    std::cout << num << std::endl;
    //usando string to float
    num = strtod(numero,NULL);
    std::cout << num;
}
void numeros_aleatorios(){
    //usando horario como seed
    srand(time(NULL));
    std::cout << time(NULL) <<std::endl ;
    for(int _=0; _<10;_++){
        std::cout << rand() <<std::endl;

    }}

void main(){


    
}