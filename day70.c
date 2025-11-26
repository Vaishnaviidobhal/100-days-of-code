#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);

    int newWord = 1;

    for(int i = 0; str[i] != '\0'; i++) {

        if (newWord && str[i] != ' ') {
            str[i] = toupper(str[i]);
            newWord = 0;
        } 
        else {
            if (str[i] == ' ')
                newWord = 1;
        }
    }

    printf("%s", str);

    return 0;
}
