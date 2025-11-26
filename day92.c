#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s[5];

    for (int i = 0; i < 5; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    for (int i = 0; i < 5; i++) {
        printf("Name: %s | Roll: %d | Marks: %d\n",
               s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}
