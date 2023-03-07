/*
 * 01.c (Chapter 16, page 412, Programming Project 1)
 * Prints corresponding country.
 */

#include <stdio.h>

struct dialing_code {
    char *country;
    int code;
};

const struct dialing_code country_codes[] = {
    {"Argentina",            54}, {"Bangladesh",      880},
    {"Brazil",               55}, {"Burma (Myanmar)",  95},
    {"China",                86}, {"Colombia",         57},
    {"Congo, Dem. Rep. of", 243}, {"Egypt",            20},
    {"Ethiopia",            251}, {"France",           33},
    {"Germany",              49}, {"India",            91},
    {"Indonesia",            62}, {"Iran",             98},
    {"Italy",                39}, {"Japan",            81},
    {"Mexico",               52}, {"Nigeria",         234},
    {"Pakistan",             92}, {"Philippines",      64},
    {"Poland",               48}, {"Russia",            7},
    {"South Africa",         27}, {"South Korea",      82},
    {"Spain",                34}, {"Sudan",           249},
    {"Thailand",             66}, {"Turkey",           90},
    {"Ukraine",             380}, {"United Kingdom",   44},
    {"United States",         1}, {"Vietnam",          84}
};

/*
 * find_contry_code:
 *     Looks up the code in the country_codes array. If the code is found,
 *     returns index; if not, return -1.
 */
int find_contry_code(int code);

/*
 * main:
 *     Asks the user to enter an international dialing code and then looks it up in
 *     the country_codes array. If it finds the code, the program should display
 *     the name of the corresponding country; if not, the program should print an
 *     error message.
 */
int main(void)
{
    int code, i;

    printf("Enter an international dialing code: ");
    scanf("%d", &code);

    i = find_contry_code(code);
    if (i < 0) {
        printf("Error: not found such a code.");
        return 0;
    }

    printf("%s", country_codes[i].country);

    return 0;
}

int find_contry_code(int code)
{
    int i;

    for (i = 0; i < (int) (sizeof(country_codes) / sizeof(country_codes[0])); i++) {
        if (code == country_codes[i].code) {
            return i;
        }
    }

    return -1;
}
