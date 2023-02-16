/*
 * 18.c (Chapter 13, page 311, Exercise 18)
 */

#include <stdio.h>

#define SIZE 100

void remove_filename(char *url);

void my_remove_filename(char *url);

int main(void)
{
    char url[SIZE] = "https://www.knking.com/index.html";

    my_remove_filename(url);

    puts(url);

    return 0;
}

void remove_filename(char *url)
{
    while (*url) {
        url++;
    }
    while (*url != '/') {
        url--;
    }
    *url = '\0';
}

void my_remove_filename(char *url)
{

        char *p = url;
            while (*url) {
                        if (*url == '/')
                                        p = url;
                                url++;
                                    }
                *p = '\0';
}
