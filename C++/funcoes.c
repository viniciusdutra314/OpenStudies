#include<stdio.h>
#include <math.h>
double funcao(double x) { 
    return sqrt(1-x*x); 
}



int main() {
    int i; double integral = 0;
    int a = 0 ; int b = 1 ;
    double dx = (b-a)/(double)1000 ;
    for (i = 0; i < N; i++) {
        integral+=funcao(dx*i);
    }
    integral *=dx;
    printf("O resultado e %f", 4*integral);
}
