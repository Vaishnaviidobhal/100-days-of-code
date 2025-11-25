#include <stdio.h>

int main() {
    char str1[1000], str2[1000];
    int freq[26] = {0};
    int i = 0;

  
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

   
    while (str1[i] != '\0' && str1[i] != '\n') {
        if (str1[i] >= 'a' && str1[i] <= 'z')
            freq[str1[i] - 'a']++;
        else if (str1[i] >= 'A' && str1[i] <= 'Z')
            freq[str1[i] - 'A']++;
        i++;
    }

   
    i = 0;
    while (str2[i] != '\0' && str2[i] != '\n') {
        if (str2[i] >= 'a' && str2[i] <= 'z')
            freq[str2[i] - 'a']--;
        else if (str2[i] >= 'A' && str2[i] <= 'Z')
            freq[str2[i] - 'A']--;
        i++;
    }

   
    int isAnagram = 1;
    for (int j = 0; j < 26; j++) {
        if (freq[j] != 0) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
        printf("Anagrams");
    else
        printf("Not anagrams");

    return 0;
}



//
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char word[1000], longest[1000];
    int i = 0, j = 0, maxLen = 0, currLen = 0;

   
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] != ' ') {
            word[j++] = str[i];
            currLen++;
        } else {
            word[j] = '\0';
            if (currLen > maxLen) {
                maxLen = currLen;
                strcpy(longest, word);
            }
            j = 0;
            currLen = 0;
        }
        i++;
    }

  
    word[j] = '\0';
    if (currLen > maxLen) {
        strcpy(longest, word);
    }

    printf("%s", longest);
    return 0;
}
