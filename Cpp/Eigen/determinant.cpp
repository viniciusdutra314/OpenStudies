#include <iostream>
#include <Eigen/Dense>

int main(){
    Eigen::Matrix2d matrix ; 
    matrix << 1,2,
              3,4;
    std::cout << matrix.determinant();
}