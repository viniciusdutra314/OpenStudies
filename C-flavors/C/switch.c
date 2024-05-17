#include <stdio.h>

int main(int argc, const char * argv[]) {
    char c;
    printf("Enter American Grade: ");
    scanf("%c", &c);
    switch(c){
        case 'a':
        case 'A':
            printf("Grade is 10\n");
            break;
        case 'b':
        case 'B':
            printf("Grade is 9\n");
            break;
        case 'c':
        case 'C':
            printf("Grade is 8\n");
            break;
        default:
            printf("No corresponding grade!!\n");
    }
    return 0;
}