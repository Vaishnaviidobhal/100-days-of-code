#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);   // size of the array

    int arr[n];
    int sum = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int expected = n * (n + 1) / 2;  // sum of 0 to n

    int missing = expected - sum;
    printf("%d", missing);

    return 0;
}
