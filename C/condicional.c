#include <stdio.h>

int main( ) {
    int a ; int b; 
    printf("Coloque o valor de a ");
    scanf("%d",&a);
    printf("Coloque o valor de b ");
    scanf("%d",&b);
    int c; c=a<b ? b : a;
    printf("o maior dos dois e %d ",c)
;}