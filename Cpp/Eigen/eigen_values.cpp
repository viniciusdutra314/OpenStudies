#include <iostream>
#include <Eigen/Dense>

int main() {
    Eigen::Matrix3d matrix;
    matrix << 1, 2, 3,
              4, 5, 6,
              7, 8, 10;
    Eigen::EigenSolver<Eigen::Matrix3d> solver(matrix);
    Eigen::Vector3cd eigenvalues = solver.eigenvalues();
    std::cout << "Eigenvalues:\n" << eigenvalues << "\n";
    return 0;
}
