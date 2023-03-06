/*
 * date.h (Chapter 16, page 408, Exercise 5)
 */

#ifndef DATE_H
#define DATE_H

#define N_MONTHS 12

struct date {
    int month, day, year;
};

/* 
 * day_of_year: 
 *     Returns the day of the year specified by date struct arguments.
 */
int day_of_year(struct date d);
/*
 * compare_dates:
 *     Returns -1 if d1 is an earlier date than d2,
 *     +1 if d1 is a later date than d2,
 *     and 0 if d1 and d2 are the same.
 */
int compare_dates(struct date d1, struct date d2);

#endif
