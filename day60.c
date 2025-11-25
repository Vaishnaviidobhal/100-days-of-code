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

    int dq[n]; // deque to store indexes
    int front = 0, rear = -1;

    // Process first k elements
    for(int i = 0; i < k; i++) {
        while(front <= rear && arr[dq[rear]] <= arr[i])
            rear--;
        dq[++rear] = i;
    }

    // Remaining elements
    for(int i = k; i < n; i++) {
        printf("%d ", arr[dq[front]]); // max of previous window

        // Remove elements out of this window
        while(front <= rear && dq[front] <= i - k)
            front++;

        // Maintain decreasing order in deque
        while(front <= rear && arr[dq[rear]] <= arr[i])
            rear--;

        dq[++rear] = i;
    }

    // Print max for last window
    printf("%d\n", arr[dq[front]]);

    return 0;
}
