#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joining;
};

int main() {
    struct Employee e;

    scanf("%s %d %d %d %d",
          e.name,
          &e.id,
          &e.joining.day,
          &e.joining.month,
          &e.joining.year);

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d",
           e.name, e.id,
           e.joining.day,
           e.joining.month,
           e.joining.year);

    return 0;
}
