#include <iostream>
#include <random>
#include <math.h>






int main(){
    float length=1;
    int dimension=2;
    int num_simulations=100000000;
    int inside=0;
    for (int i = 0; i < num_simulations; i++){   
        float total_distance = 0;
        for (int j=0; j<dimension;j++){
            total_distance+=powf(((float)rand())/RAND_MAX,2);
            }
        if (total_distance<length){
                inside++;}
     }
    float ratio=(float)inside/num_simulations;
    std::printf("%f \n", 4*ratio);  
}