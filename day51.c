#include <stdio.h>

int main() {
    int n, target;
    int nums[100];
    int i, first = -1, last = -1;

    // Input array size
    scanf("%d", &n);

    // Input array elements
    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    // Input target
    scanf("%d", &target);

    // Find first and last occurrence
    for (i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first == -1)
                first = i;
            last = i;
        }
    }

    printf("%d,%d", first, last);

    return 0;
}
