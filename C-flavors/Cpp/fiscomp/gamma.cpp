#include <iostream>
#include <math.h>

float factorial(float number){
    if (number==0){
        return 1;
        }
    else if (number==0.5){
        return sqrtf(M_PI);
        }
    else {
        return number*factorial(number-1);
        }
}

int main(){
    for (float x=0.5;x<10;x++){
        std::printf("(%f)! = %f \n",x,factorial(x));

    }
}