/*
 * 05.c (Chapter 5, page 412, programming project 5)
 * Ask user to enter a time, then displays the departure and arrival times for the flight
 * whose departure time is closest to that entered by the user.
 */

#include <stdio.h>

#define TIMES_SIZE (int) (sizeof(times) / sizeof(*times))

struct time {
    int departure;
    int arrival;
};

void print_time(int time);

int main(void)
{
    const struct time times[] = {
        {8 * 60, 10 * 60 + 16},       {9 * 60 + 43, 11 * 60 + 52},
        {11 * 60 + 19, 13 * 60 + 31}, {12 * 60 + 47, 15 * 60},
        {14 * 60, 16 * 60 + 8},       {15 * 60 + 45, 17 * 60 + 55},
        {19 * 60, 21 * 60 + 20},      {21 * 60 + 45, 11 * 60 + 58}
    };
    int hour, minute, time, i;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    time = hour * 60 + minute;

    for (i = 0; i + 1 < TIMES_SIZE; i++) {
        if (time < times[i].departure + (times[i + 1].departure - times[i].departure) / 2) {
            break;
        }
    }

    printf("Closest departure time is ");
    print_time(times[i].departure);
    printf(", arriving at ");
    print_time(times[i].arrival);

    return 0;
}

void print_time(int time)
{
    int temp = time / 60 % 12;
    printf("%d:%.2d %c.m.",
            temp == 0 ? 12 : temp, time % 60,
            time < 12 * 60 ? 'a' : 'p');
}
