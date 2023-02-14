/*
 * 07.c (Chapter 10, page 239, Programming Project 7)
 * Prompt the user for a number and then displays the number,
 * using characters to simulate the effect of a seven-secment display
 */

#include <stdio.h>
#include <ctype.h> /* is_digit() */

#define MAX_DIGITS 10
#define ROW 0
#define COLUMN 1

/*
 * seven-segment numbering
 *  0 :  _
 * 561: |_|
 * 432: |_|
 */
const int segments[MAX_DIGITS][7] = {{1, 1, 1, 1, 1, 1, 0},   /* 0 */
				     {0, 1, 1, 0, 0, 0, 0},   /* 1 */
				     {1, 1, 0, 1, 1, 0, 1},   /* 2 */
				     {1, 1, 1, 1, 0, 0, 1},   /* 3 */
				     {0, 1, 1, 0, 0, 1, 1},   /* 4 */
				     {1, 0, 1, 1, 0, 1, 1},   /* 5 */
				     {1, 0, 1, 1, 1, 1, 1},   /* 6 */
				     {1, 1, 1, 0, 0, 0, 0},   /* 7 */
				     {1, 1, 1, 1, 1, 1, 1},   /* 8 */
				     {1, 1, 1, 1, 0, 1, 1}};  /* 9 */
/*
 * seven-segment coordinate (row, column)
 *  0123
 * 0 _  
 * 1|_| 
 * 2|_| 
 * 3    
 */
const int segment_coordinates[7][2] = {{0, 1}, {1, 2}, {2, 2}, {2, 1},
				       {2, 0}, {1, 0}, {1, 1}};
					
char digits[4][MAX_DIGITS * 4];

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void)
{
    char ch, position;

    printf("Enter a number: ");

    clear_digits_array();
    position = 0;
    while ((ch = getchar()) != '\n' && position < MAX_DIGITS) {
	if (isdigit(ch)) {
	    process_digit(ch - '0', position);
	    position++;
	}
    }

    print_digits_array();

    return 0;
}

/*
 * clear_digits_array: Store blank characters
 *		       into all elements of the digits array.
 */
void clear_digits_array(void)
{
    int i, j;

    for (i = 0; i < 4; i++) {
	for (j = 0; j < MAX_DIGITS * 4; j++) {
	    digits[i][j] = ' ';
	}
    }
}

/*
 * process_digit: Store the seven-segment representation of digit
 *		  into a specified position in the digits array.
 */
void process_digit(int digit, int position)
{
    int row, column, i;
    
    for (i = 0; i < 7; i++) {
	if (segments[digit][i]) {
	    row = segment_coordinates[i][ROW];
	    column = position * 4 + segment_coordinates[i][COLUMN];
	    digits[row][column] = column % 2 == 0 ? '|' : '_';
	}
    }
}

/*
 * print_digits_array: Display the rows of the digits array,
 *		       each on a single line,
 *		       producing output such as that shown in the example.
 */
void print_digits_array(void)
{
    int i, j;

    for (i = 0; i < 4; i++) {
	for (j = 0; j < MAX_DIGITS * 4; j++) {
	    putchar(digits[i][j]);
	}
	putchar('\n');
    }
}
