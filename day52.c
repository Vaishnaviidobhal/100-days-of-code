#include <stdio.h>

int main() {
    int n, x;
    int arr[100];
    int i, ceilIndex = -1;

    // Input array size
    scanf("%d", &n);

    // Input array elements
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Input x
    scanf("%d", &x);

    // Find ceil index
    for (i = 0; i < n; i++) {
        if (arr[i] >= x) {
            ceilIndex = i;
            break;  // first occurrence of ceil found
        }
    }

    printf("%d", ceilIndex);

    return 0;
}
