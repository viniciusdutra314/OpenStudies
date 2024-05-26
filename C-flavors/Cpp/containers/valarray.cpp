#include <valarray>
#include <iostream>
#include <cmath>


int main(){
    std::valarray<float> x={1.0,2.0,3.0,4.0,5.0,6.0,7.0};
    std::valarray<float> quadrados=std::pow(x,2);
    for (auto quadrado : quadrados){
        std::cout<<quadrado<<"\n";
    };

}