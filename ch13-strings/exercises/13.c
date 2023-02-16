/*
 * 13.c (Chapter 13, page 310, Exercise 13)
 */

#include <stdio.h>
#include <string.h>

#define SIZE 100

void build_index_url(const char *domain, char *index_url);

int main(void)
{
    char index_url[SIZE];

    build_index_url("knking.com", index_url);

    puts(index_url);

    return 0;
}

/*
 * build_index_url: Add "https://www." to the beginning of domain and
 *                  "/index.html" to the end of the string,
 *                  storing the result in the string pointed to by index_url.
 */
void build_index_url(const char *domain, char *index_url)
{
    strcat(strcat(strcpy(index_url, "http://www."), domain), "/index.html");
}
