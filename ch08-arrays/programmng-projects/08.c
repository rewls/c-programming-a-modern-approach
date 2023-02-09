/*
 * 08.c (Chapter 8, page 179, Exercise 8)
 * Prompts for five quiz grades for each of five students
 * then computes the total score and average score for each student,
 * and the average score, high score for each quiz
 */

#include <stdio.h>

#define N_STUDENTS 5
#define N_QUIZZES 5

int main(void)
{
    /* grades[i][SIZE]: row total, grades[SIZE][j]: column total */
    int grades[N_QUIZZES][N_STUDENTS] = {0}, high_score[N_QUIZZES], low_score[N_QUIZZES], total = 0,
	i, j;
    float average_student[N_STUDENTS], average_quiz[N_QUIZZES];

    for (i = 0; i < N_STUDENTS; i++) {
	printf("Enter row %d: ", i);
	for (j = 0; j < N_QUIZZES; j++) {
	    scanf("%d", &grades[i][j]);
	    total += grades[i][j];
	    average_student[i] += grades[i][j] * (1.0f / N_STUDENTS);
	    average_quiz[j] += grades[i][j] * (1.0f / N_QUIZZES);
	    if (i == 0 || high_score[j] < grades[i][j]) {
		high_score[j] = grades[i][j];
	    }
	    if (i == 0 || low_score[j] > grades[i][j]) {
		low_score[j] = grades[i][j];
	    }
	}
    }

    printf("Total score: %d\n", total);
    printf("Average score for each student:");
    for (i = 0; i < N_STUDENTS; i++) {
	printf(" %.2f", average_student[i]);
    }
    printf("\n");

    printf("Average score for each quiz:");
    for (i = 0; i < N_QUIZZES; i++) {
	printf(" %.2f", average_quiz[i]);
    }
    printf("\n");

    printf("High score for each quiz:");
    for (i = 0; i < N_QUIZZES; i++) {
	printf(" %d", high_score[i]);
    }
    printf("\n");

    printf("Low score for each quiz:");
    for (i = 0; i < N_QUIZZES; i++) {
	printf(" %d", low_score[i]);
    }

    return 0;
}
