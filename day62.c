#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxSoFar = arr[0];
    int currentSum = arr[0];

    for(int i = 1; i < n; i++) {
        currentSum = (currentSum + arr[i] > arr[i]) ? currentSum + arr[i] : arr[i];
        if(currentSum > maxSoFar)
            maxSoFar = currentSum;
    }

    printf("Maximum Subarray Sum: %d\n", maxSoFar);

    return 0;
}
