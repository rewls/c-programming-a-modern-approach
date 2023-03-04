/*
 * 03.c (Chapter 10, page 239, Programming Project 3)
 * Classifies a poker hand
 */

#include <stdbool.h>   /* C99 only */
#include <stdio.h>
#include <stdlib.h>

#define NUM_CARDS 5
#define RANK 0
#define SUIT 1

int hand[NUM_CARDS][2];
bool straight, flush, four, three;
int pairs;   /* can be 0, 1, or 2 */

void read_cards(void);
void analyze_hand(void);
void sort_rank(void);
void print_result(void);

/*
 * main: Calls read_cards, analyze_hand, and print_result
 *       repeatedly.
 */
int main(void)
{
    for (;;) {
        read_cards();
        analyze_hand();
        print_result();
    }

    return 0;
}

/*
 * read_cards: Reads the cards into the external
 *             variables num_in_rank and num_in_suit;
 *             checks for bad cards and duplicate cards.
 */
void read_cards(void)
{
    char ch, rank_ch, suit_ch;
    int rank, suit, cards_read, i;
    bool bad_card, duplicate_card;

    rank = 0;
    suit = 0;
    cards_read = 0;
    while (cards_read < NUM_CARDS) {
        bad_card = false;

        printf("Enter a card: ");

        rank_ch = getchar();
        switch (rank_ch) {
            case '0':           exit(EXIT_SUCCESS);
            case '2':           rank = 0; break;
            case '3':           rank = 1; break;
            case '4':           rank = 2; break;
            case '5':           rank = 3; break;
            case '6':           rank = 4; break;
            case '7':           rank = 5; break;
            case '8':           rank = 6; break;
            case '9':           rank = 7; break;
            case 't': case 'T': rank = 8; break;
            case 'j': case 'J': rank = 9; break;
            case 'q': case 'Q': rank = 10; break;
            case 'k': case 'K': rank = 11; break;
            case 'a': case 'A': rank = 12; break;
            default:            bad_card = true;
        }

        suit_ch = getchar();
        switch (suit_ch) {
            case 'c': case 'C': suit = 0; break;
            case 'd': case 'D': suit = 1; break;
            case 'h': case 'H': suit = 2; break;
            case 's': case 'S': suit = 3; break;
            default:            bad_card = true;
        }

        while ((ch = getchar()) != '\n') {
            if (ch != ' ') bad_card = true;
        }

        /* check duplicate card */
        duplicate_card = false;
        for (i = 0; i < cards_read; i++) {
            if (hand[i][RANK] == rank && hand[i][SUIT] == suit) {
                duplicate_card = true;
                break;
            }
        }

        if (bad_card)
            printf("Bad card; ignored.\n");
        else if (duplicate_card)
            printf("Duplicate card; ignored.\n");
        else {
            hand[cards_read][RANK] = rank;
            hand[cards_read][SUIT] = suit;
            cards_read++;
        }
    }
}

/*
 * analyze_hand: Determines whether the hand contains a
 *               straight, a flush, four-of-a-kind,
 *               and/or three-of-a-kind; determines the
 *               number of pairs; stores the results into
 *               the external variables straight, flush,
 *               four, three, and pairs.
 */
void analyze_hand(void)
{
    int count, i;

    straight = false;
    flush = false;
    four = false;
    three = false;
    pairs = 0;
    
    sort_rank();

    /* check for flush */
    for        (i = 0; i < NUM_CARDS - 1; i++) {
        if (hand[i][SUIT] != hand[i + 1][SUIT]) {
            break;
        }
    }
    if (i == NUM_CARDS - 1) {
        flush = true;
    }

    /* check for straight */
    for (i = 0; i < NUM_CARDS - 1; i++) {
        if (hand[i][RANK] + 1 != hand[i + 1][RANK]) {
            break;
        }
    }
    if (i == NUM_CARDS - 1) {
        straight = true;
        return;
    }

    /* check for 4-of-a-kind, 3-of-a-kind, and pairs */
    for (i = 0; i < NUM_CARDS - 1; i++) {
        count = 1;
        for (; i < NUM_CARDS - 1 && hand[i][RANK] == hand[i + 1][RANK]; i++) {
            count++;
        }
        switch (count) {
            case 4: four = true;    break;
            case 3: three = true;   break;
            case 2: pairs++;            break;
        }
    }
}

/*
 * sort_rank: Sorts rank of hand,
 *            using selection sort
 */
void sort_rank(void)
{
    int i_max, i, j, temp;

    for (i = NUM_CARDS - 1; i > 0; i--) {
        i_max = 0;
        for (j = 0; j <= i; j++) {
            if (hand[i_max][RANK] < hand[j][RANK]) {
                i_max = j;
            }
        }
        temp = hand[i][RANK];
        hand[i][RANK] = hand[i_max][RANK];
        hand[i_max][RANK] = temp;
        temp = hand[i][SUIT];
        hand[i][SUIT] = hand[i_max][SUIT];
        hand[i_max][SUIT] = temp;
    }
}

/*
 * print_result: Prints the classification of the hand,
 *               based on the values of the external
 *               variables straight, flush, four, three,
 *               and pairs.
 */
void print_result(void)
{
    if (straight && flush) printf("Straight flush");
    else if (four)         printf("Four of a kind");
    else if (three &&
             pairs == 1)   printf("Full house");
    else if (flush)        printf("Flush");
    else if (straight)     printf("Straight");
    else if (three)        printf("Three of a kind");
    else if (pairs == 2)   printf("Two pairs");
    else if (pairs == 1)   printf("Pair");
    else                   printf("High card");

    printf("\n\n");
}
