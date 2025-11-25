#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, j = 0;
    char result[1000];

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];
        
        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            result[j++] = str[i];  
        }
        i++;
    }

    result[j] = '\0';

    printf("%s", result);
    return 0;
}




//
#include <stdio.h>

int main() {
    char str[1000];
    int freq[26] = {0}; // For 'a' to 'z'
    int i = 0;
    char result = '\0';

    // Input string
    fgets(str, sizeof(str), stdin);

    // Traverse the string
    while (str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];

        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
            if (freq[ch - 'a'] == 2) { 
                result = ch;
                break;
            }
        }
        i++;
    }

    if (result != '\0')
        printf("%c", result);
    else
        printf("No repeating character");

    return 0;
}
