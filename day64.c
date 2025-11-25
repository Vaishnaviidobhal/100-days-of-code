#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);

    int lastIndex[256]; // to store last index of characters
    for(int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    int maxLen = 0;
    int start = 0;

    for(int i = 0; i < strlen(s); i++) {
        // if repeated and inside current window, shift start
        if(lastIndex[(unsigned char)s[i]] >= start) {
            start = lastIndex[(unsigned char)s[i]] + 1;
        }

        lastIndex[(unsigned char)s[i]] = i;
        int windowLength = i - start + 1;

        if(windowLength > maxLen)
            maxLen = windowLength;
    }

    printf("Length of longest substring: %d\n", maxLen);

    return 0;
}
