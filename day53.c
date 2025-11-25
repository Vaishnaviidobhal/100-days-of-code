#include <stdio.h>

int main() {
    int n, nums[100];
    int totalSum = 0, leftSum = 0;
    
    // Input array size
    scanf("%d", &n);

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        totalSum += nums[i];  // calculate total sum
    }

    // Find pivot index
    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - nums[i];
        if (leftSum == rightSum) {
            printf("%d", i);
            return 0;
        }
        leftSum += nums[i];
    }

    // If no pivot index found
    printf("-1");
    return 0;
}
