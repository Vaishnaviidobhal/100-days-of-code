#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    printf("SUCCESS=%d, ", SUCCESS);
    printf("FAILURE=%d, ", FAILURE);
    printf("TIMEOUT=%d", TIMEOUT);

    return 0;
}
