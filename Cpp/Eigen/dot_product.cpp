#include <iostream>
#include <Eigen/Dense>

int main(){
    Eigen::Vector3f forca(-3.1,4,15);
    Eigen::Vector3f deslocamento(1,1,3);
    float trabalho=forca.dot(deslocamento);
    std::cout << trabalho;
}