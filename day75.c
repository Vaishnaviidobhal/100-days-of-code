#include <stdio.h>

int main() {
    char filename[50];
    char text[200];

    printf("Enter file name: ");
    scanf("%s", filename);
    getchar();  // eat the leftover newline

    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    fclose(fp);

    printf("File updated successfully with appended text.");

    return 0;
}
