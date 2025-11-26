#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d",
           s.name, s.roll, s.marks);
}

int main() {
    struct Student st;

    scanf("%s %d %d", st.name, &st.roll, &st.marks);

    printStudent(st);

    return 0;
}
