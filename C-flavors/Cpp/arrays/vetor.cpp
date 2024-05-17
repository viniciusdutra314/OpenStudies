#include <stdio.h>

int main(){
    float vetor[3] ={1,3,6};
    
    for (int i=0;i<sizeof(vetor)/sizeof(vetor[0]);i++){
        printf("%f \n",vetor[i]);
    }

    }

