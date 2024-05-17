#include <math.h>
#include <stdio.h>
void print_long_double(long double value) {
    printf("euler: %.100Lf\n", value);
}


long double euler(int terms){
    long double sum=1;
    for (long i=1; i<terms;i++){sum+=1/tgamma(i+1);}
    return sum;
}