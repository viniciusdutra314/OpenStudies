#include <iostream>
#include <Eigen/Dense>

int main() {
    Eigen::Matrix3d matrix;
    matrix << 4, 0, 0,
              0, 2, 0,
              0, 0, 3;
    Eigen::Vector3d vector;
    vector << 2, 1, 3;
    Eigen::Vector3d result = matrix * vector;
    std::cout << "Matrix:\n" << matrix << "\n\n";
    std::cout << "Vector:\n" << vector << "\n\n";
    std::cout << "Result (Matrix * Vector):\n" << result << "\n";
    return 0;
}
