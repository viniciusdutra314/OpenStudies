#include <random>
#include <iostream>
#include <bitset>

int main(){
  std::random_device rdev; //seeds aleatorias
  static std::default_random_engine e{rdev()}; //gera bits aleatorios uniformente distribuidos
  static std::uniform_real_distribution<float> d{0,1}; //transforma de uniforme para a PDF desejada
  for (int i=0;i<10;i++){
    std::cout << d(e) << " , ";};

}
