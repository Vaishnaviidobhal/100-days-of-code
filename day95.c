#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

struct Student getTopper(struct Student s[], int n) {
    int maxIndex = 0;

    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    return s[maxIndex];   // returning WHOLE struct 🤌🔥
}

int main() {
    int n;
    scanf("%d", &n);

    struct Student arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", arr[i].name, &arr[i].roll, &arr[i].marks);
    }

    struct Student top = getTopper(arr, n);

    printf("Top Student: %s | Roll: %d | Marks: %d",
           top.name, top.roll, top.marks);

    return 0;
}
