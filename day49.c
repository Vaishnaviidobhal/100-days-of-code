#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i;

  
    fgets(name, sizeof(name), stdin);

 
    int len = strlen(name);
    if (name[len - 1] == '\n')
        name[len - 1] = '\0';

 
    if (name[0] != ' ')
        printf("%c.", name[0]);

    for (i = 1; name[i] != '\0'; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ')
            printf("%c.", name[i]);
    }

    return 0;
}


//
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char words[10][20];
    int i = 0, j = 0, k = 0;

 
    fgets(name, sizeof(name), stdin);

  
    int len = strlen(name);
    if (name[len - 1] == '\n')
        name[len - 1] = '\0';


    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            words[k][j] = '\0';
            k++;
            j = 0;
        } else {
            words[k][j++] = name[i];
        }
    }

   
    for (i = 0; i < k; i++) {
        printf("%c.", words[i][0]);
    }

   
    printf(" %s", words[k]);

    return 0;
}
