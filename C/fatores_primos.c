#include <stdio.h>

void primos(int n) {
    int fatores[n];
    int i;
    int index = 0;
    for (i = 2; i <= n; i++) {
        if (n % i == 0) {
            fatores[index] = i;
            index++;
            while (n % i == 0) {
                n = n / i;
            }
        }
    }
    printf("Os fatores primos sao: ");
    for (i = 0; i != index; i++) {
        printf("%d ", fatores[i]);
    }
}

int main(){int n = 115; primos(n);}