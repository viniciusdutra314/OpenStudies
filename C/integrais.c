#include<stdio.h>
#include<math.h>
float funcao(float x) {return sin(x);}     
#define PI 3.1415

int main() {
    int N=100;
    int i; double integral = 0;
    float a = 0 ; float b = PI*2 ;
    float dx = (b-a)/N ;
    for (i = 0; i < N; i++) {
        integral+=funcao(dx*i);
    }
    integral *=dx;
    printf("O resultado e %f", integral);
}
