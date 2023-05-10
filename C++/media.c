#include <stdio.h>
#include <ctype.h>

int main(){
    int a,b,c,d; float valor
    printf("coloque 4 numeros so positivos ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if (a<0 || b<0 ||  c<0 || d<0) {valor=(float)(a+b+c+d)/4;}
    else (valor=0);
    printf("%.2f",valor);

}