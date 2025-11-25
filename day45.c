#include <stdio.h>

int main() {
    char str[1000], ch;
    int count = 0, i = 0;

    fgets(str, sizeof(str), stdin);


    scanf("%c", &ch);

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ch)
            count++;
        i++;
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
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;  
        }
        i++;
    }

    printf("%s", str);
    return 0;
}
