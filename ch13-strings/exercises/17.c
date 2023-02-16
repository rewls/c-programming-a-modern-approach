/*
 * 17.c (Chapter 13, page 310, Exercise 17)
 */

#include <stdbool.h>  /* C99 only */
#include <stdio.h>
#include <ctype.h>

#define SIZE 100

bool test_extension(const char *file_name,
                    const char *extension);

int main(void)
{
    printf("%d", test_extension("memo.txt", "TXT"));

    return 0;
}

/*
 * test_extension: Return true if the file's extension matches
 *                 the string pointed by extension,
 *                 ignoring the case of letters.
 */
bool test_extension(const char *file_name,
                    const char *extension)
{
    while (*file_name && *file_name++ != '.')
        ;
    while (*file_name && *extension &&
            toupper(*file_name++) == toupper(*extension++))
        ;
    if (!*file_name && !*extension++) {
        return true;
    }

    return false;
}
