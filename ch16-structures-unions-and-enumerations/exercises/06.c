/*
 * 06.c (Chapter 16, page 408, Exercise 6)
 */

#include <stdio.h>

#define NUM_MINUTES 60
#define NUM_SECONDS 60

struct time {
    int hours, minutes, seconds;
};

/*
 * split_time:
 *     Returns a structure containing the equivalent time
 *     in hours (0-23), minutes (0-59), and seconds (0-59).
 */
struct time split_time(long total_seconds);
/*
 * print_time:
 *     Prints the time in the form hh:mm:ss.
 */
void print_time(struct time t);

int main(void)
{
    print_time(split_time(9 * NUM_MINUTES * NUM_SECONDS + 36 * NUM_SECONDS + 4));

    return 0;
}

struct time split_time(long total_seconds)
{
    /* C99 Only */
    return (struct time) {total_seconds / (NUM_MINUTES * NUM_SECONDS),
                          total_seconds % (NUM_MINUTES * NUM_SECONDS) / NUM_SECONDS,
                          total_seconds % NUM_SECONDS};
}

void print_time(struct time t)
{
    printf("%.2d:%.2d:%.2d", t.hours, t.minutes, t.seconds);
}
