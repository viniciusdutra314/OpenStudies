#include<stdio.h>
int main() {
    int n, i, f;
    double s;
    printf("Insert n: ");
    scanf("%d", &n);
    s = 1;
    for(i=1, f=1; i <= n; i++){
        f *= i;
        s += 1./f;
    }
    printf("S=%.30f\n", s);
    return 0;
}