#include <iostream>
#include <complex>
#include <string>
#include <stdexcept>

int main(int argc, char *argv[]){
    try {
        float a=std::stof(argv[1]);
        float b=std::stof(argv[2]);
        float c=std::stof(argv[3]);
        if (a==0){
            throw std::overflow_error("a não pode ser zero");
        }   
        std::complex delta=b*b -4*a*c;
        std::complex x1=(-b+sqrt(delta))/(2*a);
        std::complex x2=(-b-sqrt(delta))/(2*a);
        if (x1.imag() && x2.imag()){
            std::cout << "As raizes são " << x1 << " e " << x2 << std::endl;}
        else {
            std::cout << "As raizes são " << x1.real() << " e " << x2.real() << std::endl;
             }            
        }
    catch (std::invalid_argument){
        std::cout << "a,b,c precisam ser numeros"<<std::endl;
        return 1;}
}