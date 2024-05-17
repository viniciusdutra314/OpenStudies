#include<stdio.h>

int main(){
    int N,i=0;
    printf("Digite um valor N e vamos encontrar o quadrado mais proximo ");
    scanf("%d",&N);
    while (N>=i*i){printf("%d",i);i=i++ ;}
    printf("O quadrado mais proximo e %d",i*i);
}