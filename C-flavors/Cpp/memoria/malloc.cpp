 #include<stdio.h>
 #include<stdlib.h>


 int main(){
    float *numeros;
    int quantidade;
    printf("Selecione a quantidade de numeros \n");
    scanf("%d",&quantidade);
    numeros=(float *) malloc(sizeof(float)*quantidade);
    for (int i = 0; i <quantidade; i++)
    {   numeros[i]=(float) rand()/RAND_MAX;    }
    for (int i = 0; i <quantidade; i++)
    { printf("%f \n",numeros[i]);}
    free(numeros);
 }