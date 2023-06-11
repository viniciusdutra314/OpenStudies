#include <stdio.h>

ifdef _WIN32
   define EXPORT __declspec(dllexport)
else
   define EXPORT
endif

EXPORT void factorize(int num) {
    printf("Factors of %d: ", num);
    
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
}