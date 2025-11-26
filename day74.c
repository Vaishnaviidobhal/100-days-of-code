#include <stdio.h>

int main() {
    char src[50], dest[50];

    printf("Enter source file name: ");
    scanf("%s", src);

    printf("Enter destination file name: ");
    scanf("%s", dest);

    FILE *fs = fopen(src, "r");
    if (fs == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }

    FILE *fd = fopen(dest, "w");
    if (fd == NULL) {
        printf("Error creating destination file!\n");
        fclose(fs);
        return 1;
    }

    int ch;
    while ((ch = fgetc(fs)) != EOF) {
        fputc(ch, fd);
    }

    fclose(fs);
    fclose(fd);

    printf("File copied successfully to %s", dest);

    return 0;
}
