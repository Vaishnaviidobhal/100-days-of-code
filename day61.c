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

    if(k > n || k <= 0) {
        printf("Invalid input!\n");
        return 0;
    }

    int negIndex[n];
    int front = 0, rear = -1;

    // Traverse first window
    for(int i = 0; i < k; i++) {
        if(arr[i] < 0)
            negIndex[++rear] = i;
    }

    // For each next element
    for(int i = k; i < n; i++) {
        // Print first negative of last window
        if(front <= rear)
            printf("%d ", arr[negIndex[front]]);
        else
            printf("0 ");

        // Remove elements out of this window
        while(front <= rear && negIndex[front] <= i - k)
            front++;

        // Add current element if negative
        if(arr[i] < 0)
            negIndex[++rear] = i;
    }

    // Print first negative for the last window
    if(front <= rear)
        printf("%d\n", arr[negIndex[front]]);
    else
        printf("0\n");

    return 0;
}
