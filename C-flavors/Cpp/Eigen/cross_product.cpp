#include <iostream>
#include <Eigen/Dense>

int main(){
    Eigen::Vector3f velocidade(-3.1,4,15);
    Eigen::Vector3f B_magnetico(1,0,0);
    Eigen::Vector3f forca = velocidade.cross(B_magnetico);
    std::cout << forca ;
}