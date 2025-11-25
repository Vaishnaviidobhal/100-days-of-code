#include <stdio.h>

int main() {
    char str[1000];
    int length = 0;

    // Input string
    fgets(str, sizeof(str), stdin);

    // Find length (excluding newline and null)
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Print in reverse order
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}






//
#include <stdio.h>

int main() {
    char str[1000];
    int length = 0;

    // Input string
    fgets(str, sizeof(str), stdin);

    // Find string length (excluding newline and null)
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    int isPalindrome = 1; 

    
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
