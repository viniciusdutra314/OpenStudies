//https://www.youtube.com/watch?v=jsd_YhYmix4
#include <iostream>
#include <ctime>
#include <cmath>

int main(){
    clock_t t;
    t=clock();
    float example=1;
    //operação custosa
    for (int i=1; i<100000;i++){
        example+=sin(i);
    }
    t=clock()-t;
    std::cout << example << "Clocks per second"<< CLOCKS_PER_SEC << std::endl;
    std::cout << ((float)t)/CLOCKS_PER_SEC<<std::endl;

}