#include <iostream>
#include <Eigen/Dense>

int main(){
    Eigen::Matrix3d matrix ; 
    matrix << 1,2,0,
              3,4,-1,
              5,3,1;
    if (matrix.determinant()!=0){
    std::cout << matrix.inverse();}
}