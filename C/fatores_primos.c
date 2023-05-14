#include<stdio.h>

int main(){
    int  n; int i;int index=0;
    scanf("%d",&n);
    int fatores[n];
    for ( i = 2; i <= n; i++)
        {if (n%i==0)
            {fatores[index]=i; index++ ; 
            while (n%i==0)
                    {n=n/i;}
            }
        }
    printf("Os fatores primos sao: ");
    for (i=0;i!=index;i++) 
        {printf("%d ",fatores[i]);}


}
