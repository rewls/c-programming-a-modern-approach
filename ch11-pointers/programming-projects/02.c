/*
 * 02.c (Chapter 11, page 256, Programming Project 2)
 * Ask user to enter a time, then displays the departure and arrival times for the flight
 * whose departure time is closest to that entered by the user.
 */

#include <stdio.h>

#define SIZE 8

void find_closest_flight(int desired_time,
                         int *departure_time,
                         int *arrival_time);

int main(void)
{
    int hour, minute, departure_time, arrival_time, temp;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    find_closest_flight(hour * 60 + minute, &departure_time, &arrival_time);

    printf("Closest departure time is %d:%.2d %c.m., ",
            (temp = departure_time / 60 % 12) == 0 ? 12 : temp, departure_time % 60, 
            departure_time < 12 * 60 ? 'a' : 'p');
    printf("arriving at %d:%.2d %c.m.",
            (temp = arrival_time / 60 % 12) == 0 ? 12 : temp, arrival_time % 60, 
            arrival_time < 12 * 60 ? 'a' : 'p');

    return 0;
}

void find_closest_flight(int desired_time,
                         int *departure_time,
                         int *arrival_time)
{
    const int departure_times[SIZE] = {8 * 60, 9 * 60 + 43, 11 * 60 + 19, 12 * 60 + 47,
                                       14 * 60, 15 * 60 + 45, 19 * 60, 21 * 60 + 45},
              arrival_times[SIZE] = {10 * 60 + 16, 11 * 60 + 52, 13 * 60 + 31, 15 * 60,
                                     16 * 60 + 8 , 17 * 60 + 55, 21 * 60 + 20, 23 * 60 + 58};
    int i;

    for (i = 0; i + 1 < SIZE; i++) {
        if (desired_time < departure_times[i] + (departure_times[i + 1] - departure_times[i]) / 2) {
            break;
        }
    }

    *departure_time = departure_times[i];
    *arrival_time = arrival_times[i];
}
