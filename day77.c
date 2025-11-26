#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fin = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");

    if (fin == NULL) {
        printf("Error: input.txt not found!\n");
        return 1;
    }

    if (fout == NULL) {
        printf("Error: Could not create output.txt!\n");
        fclose(fin);
        return 1;
    }

    int ch;

    while ((ch = fgetc(fin)) != EOF) {
        fputc(toupper(ch), fout);
    }

    fclose(fin);
    fclose(fout);

    printf("Conversion complete! Check output.txt");

    return 0;
}
