#include <stdio.h>
#include <ctype.h>

int main() {
    char entrada;char resultado;
    scanf("%c",&entrada);
    if (isalpha(entrada)) {resultado = islower(entrada) ? toupper(entrada) : tolower(entrada);printf("%c", resultado);}
    else {resultado; printf("%d",entrada);}
}
