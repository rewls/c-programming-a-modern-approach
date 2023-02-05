# Ch8 Arrays Exercises

- page 177 ~ 178

## Section 8.1 One-Dimensional Arrays

### 1

- 표현식에서 type `t`가 `a`의 element의 type임을 알 수 없기 때문에 가독성이 좋지 않다.

### 2

- `digit`을 character form의 digit이라고 하면 subscript를 `[digit - '0']`와 같이 작성하여 array를 indexing할 수 있다.

### 3

```c
#define FALSE 0
#define TRUE 1
typedef int Bool;
...
Bool wekend[7] = {true, fasle, fasle, fasle, fasle, fasle, true};
...
```

### 4

- c99에서 다음과 같이 작성할 수 있다. 

```c
#include <stdbool.h>
...

bool weekend[7] = {true, [6] = true};
...
```

### 5

```c
#define SIZE 40

int fib_numbers[SIZE] = {0, 1}, i;

for (i = 2; i < SIZE; i++) {
    fib_numbers[i] = fib_numbers[i - 2] + fib_numbers[i - 1];
}
```

## Section 8.2 Multidimensional Arrays

### 6

```c
const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0},   /* 0 */
                             {0, 1, 1, 0, 0, 0, 0},   /* 1 */
                             {1, 1, 0, 1, 1, 0, 1},   /* 2 */
                             {1, 1, 1, 1, 0, 0, 1},   /* 3 */
                             {0, 1, 1, 0, 0, 1, 1},   /* 4 */
                             {1, 0, 1, 1, 0, 1, 1},   /* 5 */
            			     {1, 0, 1, 1, 1, 1, 1},   /* 6 */
		            	     {1, 1, 1, 0, 0, 0, 0},   /* 7 */
			                 {1, 1, 1, 1, 1, 1, 1},   /* 8 */
			                 {1, 1, 1, 1, 0, 1, 1}};  /* 9 */
```

### 7

```c
const int segments[10][7] = {{1, 1, 1, 1, 1, 1},      /* 0 */
                             {0, 1, 1},               /* 1 */
                             {1, 1, 0, 1, 1, 0, 1},   /* 2 */
                             {1, 1, 1, 1, 0, 0, 1},   /* 3 */
                             {0, 1, 1, 0, 0, 1, 1},   /* 4 */
                             {1, 0, 1, 1, 0, 1, 1},   /* 5 */
            			     {1, 0, 1, 1, 1, 1, 1},   /* 6 */
		            	     {1, 1, 1},               /* 7 */
			                 {1, 1, 1, 1, 1, 1, 1},   /* 8 */
			                 {1, 1, 1, 1, 0, 1, 1}};  /* 9 */
```

### 8

```c
float temperature_readings[30][24];
```

### 9

```c
#define N_DAYS 30
#define N_HOURS 24

float temperature_readings[N_DAYS][N_HOURS], average;
int i, j;

average = 0.0f;
for (i = 0; i < N_DAYS; i++) {
    for (j = 0; j < N_HOURS; j++) {
	average += temperature_readings[i][j];
    }
}

average /= N_DAYS * N_HOURS;
```

### 10

```c
char chess_board[8][8] = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
			              {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
			              {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
			              {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
			              {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
			              {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
			              {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
			              {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};
```

### 11

```c
#define SIZE 8
...
char checker_board[SIZE][SIZE];
int i, j;

for (i = 0; i < SIZE; i++) {
    for (j = 0; j < SIZE; j++) {
        checker_board[i][j] = (i + j) % 2 == 0 ? 'B' : 'R';
    }
}
...
```
