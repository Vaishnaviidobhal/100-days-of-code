#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    char day[3], month[3], year[5];
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    scanf("%s", date);


    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(month, date + 3, 2);
    month[2] = '\0';
    strncpy(year, date + 6, 4);
    year[4] = '\0';

    int m = atoi(month);

    printf("%s-%s-%s", day, months[m - 1], year);

    return 0;
}


/*
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i, j, k;
    int first = 1;

   
    scanf("%s", str);
    len = strlen(str);

  
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            if (!first)
                printf(",");
            first = 0;

            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
        }
    }

    return 0;
}
    
*/