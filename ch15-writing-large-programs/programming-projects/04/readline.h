/*
 * readline.h (Chapter 15, page 375, Programming Project 4)
 */

#ifndef READLINE_H
#define READLINE_H

/*
 * readline:
 *     Read a line,
 *     don't skip white-space characters,
 *     stops reading at the first new-line character
 *     (which isn't stored in the string),
 *     and discards extra characters.
 */
int read_line(char str[], int n);

#endif
