#include <stdio.h>


int main(){
    // L=Linhas e C=Colunas
    int L=11  ; int C=11;
    int matriz[L][C];
    for (int i=0;i<L;i++){
        for (int j=0; j<C;j++){
            matriz[i][j]=i*j;}}
    for (int i=0;i<L;i++){
        printf("|");
        for (int j=0; j<C;j++){
            printf(" %d",matriz[i][j]);}
         printf(" | \n");}
;


}