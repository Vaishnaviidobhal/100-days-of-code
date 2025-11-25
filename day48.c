#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

   
    scanf("%s", str1);
    scanf("%s", str2);

    if (strlen(str1) != strlen(str2)) {
        printf("Not rotation");
        return 0;
    }

   
    strcpy(temp, str1);
    strcat(temp, str1);

   
    if (strstr(temp, str2))
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}


//
#include <stdio.h>
#include <string.h>

void reverseWord(char *word, int start, int end) {
    while (start < end) {
        char temp = word[start];
        word[start] = word[end];
        word[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[1000];
    int i = 0, start = 0;

    // Input the sentence
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (str[len - 1] == '\n')
        str[len - 1] = '\0'; 
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            reverseWord(str, start, i - 1);
            start = i + 1;
        }
        i++;
    }
 
    reverseWord(str, start, i - 1);

    printf("%s", str);
    return 0;
}
