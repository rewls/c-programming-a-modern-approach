/*
 * 08.c (Chapter 5, page 96, programming project 8)
 * Ask user to enter a time, then displays the departure and arrival times for the flight whose departure time is closest to that entered by the user.
 */

#include <stdio.h>

int main(void)
{
    int hour, minute, time, temp1, temp2;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    time = hour * 60 + minute;

    if (time < (temp1 = 8 * 60) + (temp1 + (temp2 = 9 * 60 + 43) / 2)) {
	printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");
    } else if (time < temp2 + (temp2 + (temp1 = 11 * 60 + 19) / 2)) {
	printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
    } else if (time < temp1 + (temp1 + (temp2 = 12 * 60 + 47) / 2)) {
	printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");
    } else if (time < temp2 + (temp2 + (temp1 = 14 * 60) / 2)) {
	printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.");
    } else if (time < temp1 + (temp1 + (temp2 = 15 * 60 + 45) / 2)) {
	printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.");
    } else if (time < temp2 + (temp2 + (temp1 = 19 * 60) / 2)) {
	printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.");
    } else if (time < temp1 + (temp1 + (temp2 = 21 * 60 + 45) / 2)) {
	printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.");
    } else {
	printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.");
    }

    return 0;
}
