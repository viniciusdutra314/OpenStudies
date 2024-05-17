#include <stdio.h>

void swap(int *n, int *n1){
    int tmp;
    tmp = *n;
    *n = *n1;
    *n1 = tmp;


}

int main() {
    int a ; int b;
    a = 4 ; b=7;
    printf("a=%d e b=%d\n",a,b);
    swap(&a, &b);
    printf("a=%d e b=%d",a,b);

}


