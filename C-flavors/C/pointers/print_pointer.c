#include <stdio.h>

int main() {
    long int num[100000];
    int *ptr = &num;
    
    printf("Pointer adress: %p\n", (void*)ptr); 
    printf("Its value:%d \n",*ptr);
    printf("Size of the num variable=%d bits",sizeof(num));
    return 0;
} 
