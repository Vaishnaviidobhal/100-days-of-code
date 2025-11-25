#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];

    // Input matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Only square matrices have a clear diagonal
    if (n != m) {
        printf("False");
        return 0;
    }

    int distinct = 1; // assume all diagonal elements are distinct

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i][i] == a[j][j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct)
            break;
    }

    if (distinct)
        printf("True");
    else
        printf("False");

    return 0;
}







////
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];

    // Input matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }


    if (n != m) {
        printf("Invalid input");
        return 0;
    }

    int sum = 0;


    for (int i = 0; i < n; i++) {
        sum += a[i][i];
    }

    printf("%d", sum);

    return 0;
}
