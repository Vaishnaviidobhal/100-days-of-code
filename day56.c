#include <stdio.h>

int main() {
    int n, arr[100];
    
    // Input array size
    scanf("%d", &n);
    
    // Input array elements
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    // Find next greater element for each
    for (int i = 0; i < n; i++) {
        int next = -1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next = arr[j];
                break;
            }
        }
        printf("%d", next);
        if (i != n - 1)
            printf(", ");
    }
    
    return 0;
}
