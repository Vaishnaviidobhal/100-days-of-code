#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    if(k > n) {
        printf("Invalid input! k cannot be greater than array size.\n");
        return 0;
    }

    int maxSum = 0, windowSum = 0;

    // Calculate sum of first window
    for(int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    maxSum = windowSum;

    // Sliding window
    for(int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];
        if(windowSum > maxSum)
            maxSum = windowSum;
    }

    printf("Maximum Sum of subarrays of size %d: %d\n", k, maxSum);

    return 0;
}
