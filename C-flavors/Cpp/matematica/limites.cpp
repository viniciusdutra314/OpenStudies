#include <iostream>
#include <cfloat>

int main(){
  float x = 1 ; float dx=FLT_EPSILON;
  std::cout.precision(8);
  std::cout << x+dx << std::endl;
  std::cout << x+0.01*dx << std::endl;


}
