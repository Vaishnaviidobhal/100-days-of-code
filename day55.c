#include <stdio.h>

int main() {
    int n, nums[100];
    int count, majority = -1;

    // Input array size
    scanf("%d", &n);

    // Input elements
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    // Boyer–Moore Majority Vote Algorithm
    int candidate = -1, votes = 0;
    for (int i = 0; i < n; i++) {
        if (votes == 0)
            candidate = nums[i];
        if (nums[i] == candidate)
            votes++;
        else
            votes--;
    }

    // Verify if candidate is actually the majority
    count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate)
            count++;
    }

    if (count > n / 2)
        majority = candidate;

    printf("%d", majority);

    return 0;
}
