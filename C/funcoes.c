#include<stdio.h>
<<<<<<< HEAD:C/funcoes.c

long factorial (int n){
     if (n <= 1)
         return 1;
     return n * factorial(n-1);
}


int main(){
    printf("%d",factorial(10));

    
}
=======
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
>>>>>>> 04e9de7c419db107f312c70d7e35d57d66885700:C++/funcoes.c
