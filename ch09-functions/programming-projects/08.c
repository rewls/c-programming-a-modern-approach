/*
 * 08.c (Chapter 9, page 217, Programming Project 8)
 * Simulate the game of craps, which is played with two dice
 */

#include <stdio.h>
#include <stdbool.h>  /* C99 only */
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

#define N_SIDES 6

int roll_dice(void);
bool play_game(void);

int main(void)
{
    int n_wins, n_losses;
    char ch;

    srand((unsigned) time(NULL));
    n_wins = 0;
    n_losses = 0;
    do {
	if (play_game() == true) {
	    n_wins++;
	} else {
	    n_losses++;
	}
	putchar('\n');
	printf("Play again? ");
	scanf(" %c", &ch);
	putchar('\n');
    } while (tolower(ch) == 'y');

    printf("Wins: %d  Losses: %d", n_wins, n_losses);

    return 0;
}

int roll_dice(void)
{
    int dice1, dice2;

    dice1 = rand() % N_SIDES + 1;
    dice2 = rand() % N_SIDES + 1;

    return dice1 + dice2;
}

bool play_game(void)
{
    int sum, point;

    sum = roll_dice();
    printf("You rolled: %d\n", sum);

    switch (sum) {
	case 7: case 11:
	    printf("You win!\n");
	    return true;
	    break;
	case 2: case 3: case 12:
	    printf("You lose!\n");
	    return false;
	    break;
	default:
	    point = sum;
	    printf("Your point is %d\n", sum);
	    break;
    }

    do {
	sum = roll_dice();
	printf("You rolled: %d\n", sum);
    } while (sum != point && sum != 7);

    if (sum == point) {
	printf("You win!\n");
	return true;
    } else {
	printf("You lose!\n");
	return false;
    }
}
