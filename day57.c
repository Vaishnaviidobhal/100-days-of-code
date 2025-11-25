
#include <stdio.h>

int main() {
    int n, arr[100];
    
    // Input array size
    scanf("%d", &n);
    
    // Input array elements
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    // Find previous greater element for each element
    for (int i = 0; i < n; i++) {
        int prev = -1;
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev = arr[j];
                break;
            }
        }
        printf("%d", prev);
        if (i != n - 1)
            printf(", ");
    }
    
    return 0;
}
