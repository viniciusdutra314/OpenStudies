#include <math.h>
#include <random>
#include <fstream>
#include <iostream>

float pdf_func(float x){
    float mu=0; float sigma=2;
    float y= exp(-pow((x-mu)/sigma,2)/2)/(sigma*sqrt(2*M_PI));
    return y ;

}

float cdf(float y){
    // Vamos transformar a função para integrar
    float a=-M_PI ; float b=atan(y);
    float soma=0; int N=10'000;
    std::random_device rand_device;
    std::default_random_engine engine(rand_device());
    std::uniform_real_distribution<float> dist(a,b);
    for (int _=0;_<N;_++){
        float u=dist(engine);
        soma+=pdf_func(tan(u))/(cos(u)*cos(u));
    }
    float integral=(soma/N)*(b-a);
    return integral;
}

int main(){
    std::ofstream output;
    output.open("gauss_cdf.dat");
    for (float x=-5;x<5;x+=0.01){
        output << x << " "<< cdf(x) -0.5 << "\n";
    }
    output.close();
}