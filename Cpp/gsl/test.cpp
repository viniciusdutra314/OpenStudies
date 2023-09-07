#include <iostream>
#include <gsl/gsl_sf.h>

int main() {
    double x = 25.0;  // The number for which we want to calculate the square root
    double result = gsl_sf_sqrt(x); // Calculate the square root using GSL

    std::cout << "The square root of " << x << " is " << result << std::endl;

    return 0;
}
