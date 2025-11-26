#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int seen[n];

    // initialize seen array to 0
    for(int i = 0; i < n; i++) {
        seen[i] = 0;
    }

    int repeated = -1;

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if(seen[arr[i]] == 1) {
            repeated = arr[i];
            break;  // found repeating, no need to continue
        }
        seen[arr[i]] = 1;
    }

    printf("%d", repeated);

    return 0;
}
