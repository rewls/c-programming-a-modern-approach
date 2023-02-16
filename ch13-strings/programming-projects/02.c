/*
 * 02.c (Chapter 13, page 311, Programming Project 2)
 * Prints a one-month reminder list
 */

#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50
#define MSG_LEN 60
#define DAY_LEN 12

int read_line(char str[], int n);

int main(void)
{
    char reminders[MAX_REMIND][MSG_LEN+DAY_LEN];
    char day_str[DAY_LEN], msg_str[MSG_LEN+1];
    char ch;
    int month, day, hour, minute, i, j, num_remind = 0;

    for (;;) {
        if (num_remind == MAX_REMIND) {
            printf("-- No space left --\n");
            break;
        }

        printf("Enter day and reminder: ");
        scanf("%2d/", &month);
        if (month == 0)
            break;
        scanf("%2d", &day);
        if (day < 0 || day > 31) {
            puts("Error: invalid day");
            while ((ch = getchar()) != '\n')
                ;
            continue;
        }
        scanf("%d:%d", &hour, &minute);
        sprintf(day_str, "%2d/%2d %2d:%.2d", month, day, hour, minute);
        read_line(msg_str, MSG_LEN);

        for (i = 0; i < num_remind; i++)
            if (strcmp(day_str, reminders[i]) < 0)
                break;
        for (j = num_remind; j > i; j--)
            strcpy(reminders[j], reminders[j-1]);

        strcpy(reminders[i], day_str);
        strcat(reminders[i], msg_str);

        num_remind++;
    }

    printf("\nDay          Reminder\n");
    for (i = 0; i < num_remind; i++)
        printf(" %s\n", reminders[i]);

    return 0;
}

int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}
