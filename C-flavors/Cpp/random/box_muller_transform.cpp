#include <random>
#include <fstream>
#include <cmath>
#include <iostream>

int main(){
    float sigma=1;
    float mean=10;
    constexpr float two_pi=2*M_PI;
    std::ofstream output_file;
    output_file.open("gauss_numbers.dat");
    std::random_device rdev;
    std::default_random_engine rand_engine(rdev());
    std::uniform_real_distribution<float> dist;
    for (int _=0;_<100'000;_++){
        float U1=dist(rand_engine);
        float U2=dist(rand_engine);
        float R=sqrtf(-2*logf(U1));
        float theta=two_pi*U2;
        float Z1=R*cosf(theta)*sigma +mean;
        float Z2=R*sinf(theta)*sigma +mean;
        output_file << Z1 << "\n";
        output_file << Z2 << "\n";
    }
    output_file.close();
}