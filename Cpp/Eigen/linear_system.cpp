
#include <Eigen/Dense>
#include <iostream>

int main() {
    Eigen::MatrixXd A(3, 3);
    Eigen::VectorXd b(3);
    A << 2, 1, -1,
         -3, -1, 2,
         -2, 1, 2;
    b << 8, -11, -3;
    Eigen::VectorXd x = A.fullPivLu().solve(b);
    std::cout << "Solution x = \n" << x << std::endl;
    return 0;
}
