#include <stdio.h>

int main() {
    char filename[] = "scarlet.txt";
    FILE *fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    char line[70]; // Assuming a maximum line length of 100 characters
    int i =0;
    while (i<50) {
        fgets(line, sizeof(line), fp);
        printf("%s \n", line);
        i ++;
        // Alternatively, you can use puts(line) to print the line
    }

    fclose(fp);

    return 0;
}
