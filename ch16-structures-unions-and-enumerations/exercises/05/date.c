#include "date.h"

/* 
 * unify_date:
 *     Unifies the unit of the date, then return that result.
 */
int unify_date(struct date d);

int day_of_year(struct date d)
{
    const int day_of_month[N_MONTHS] = {31, 28, 31, 30, 31, 30,
                                        31, 31, 30, 31, 30, 31};
    int n_days, i;

    if (d.month >= 2 && d.year % 4 == 0 && (d.year % 100 != 0 || d.year % 400 == 0)) {
        n_days++;
    }

    n_days = 0;
    for (i = 1; i < d.month; i++) {
        n_days += day_of_month[i - 1]; 
    }
    n_days += d.day;

    return n_days;
}

int compare_dates(struct date d1, struct date d2)
{
    int d1_unified = unify_date(d1), d2_unified = unify_date(d2);

    return d1_unified < d2_unified ? -1 :
           d1_unified > d2_unified ?  1 : 0;
}

int unify_date(struct date d)
{
    return d.year * 366 + d.month * 31 + d.day;
}
