#include <stdio.h>

int main() {
    char str[1000];
    int count = 0;


    fgets(str, sizeof(str), stdin);

  
    while (str[count] != '\0' && str[count] != '\n') {
        count++;
    }

    printf("%d", count);
    return 0;
}


//
#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;


    fgets(str, sizeof(str), stdin);

 
    while (str[i] != '\0' && str[i] != '\n') {
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}
