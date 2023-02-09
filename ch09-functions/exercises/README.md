# Ch9 Functions Exercises

- page 214 ~ 216

## Section 9.1 Defining and Calling Functions

### 1

- variable declaration은 function body에 있어야 하고, 각 parameter 앞에는 type specification이 있어야 하므로 다음과 같이 고칠 수 있다.

```c
double triangle_area(double base, height)
{
    double product;
    product = base* height;
    return product / 2;
}
```

### 2

```c
int check(int x, int y, int n)
{
    return x >= 0 && x <= n - 1 && y >= 0 && y <= n - 1;
}
```

### 3

```c
int gcd(int m, int n)
{
    int temp;

    while (n != 0) {
	temp = m % n;
	m = n;
	n = temp;
    }

    return m;
}
```

### 4

```c
#define N_MONTHS 12

int day_of_year(int month, int day, int year)
{
    int day_of_month[N_MONTHS] = {31, 28, 31, 30, 31, 30,
				  31, 31, 30, 31, 30, 31},
	n_days, i;

    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
	day_of_month[2 - 1]++;
    }

    n_days = 0;
    for (i = 1; i < month; i++) {
	n_days += day_of_month[i - 1]; 
    }
    n_days += day;

    return n_days;
}
```

### 5

```c
int num_digits(int n)
{
    int n_digits;

    for (n_digits = 0; n > 0; n_digits++) {
	n /= 10;
    }

    return n_digits;
}
```

### 6

```c
int digit(int n, int k)
{
    int i;

    for (i = 1; i < k; i++) {
	n /= 10;
    }

    return n % 10;
}
```

### 7

- 모두 legal하다.

## Section 9.2 Function Declarations

### 8

- a, b가 valid prototype이다.

## Section 9.3 Arguments

### 9

```c
i = 1, j = 2

```

### 10

#### a

```c
int largest(int a[], int n)
{
    int result, i;

    result = a[0];
    for (i = 1; i < n; i++) {
        if (result < a[i]) {
            result = a[i];
        }
    }

    return result;
}
```

#### b

```c
double average(int a[], int n)
{
    double result;
    int i;

    result = 0.0;
    for (i = 0; i < n; i++) {
        result += a[i];
    }
    result /= n;

    return result;
}
```

#### c

```c
int num_positive(int a[], int n)
{
    int result, i;

    result = 0;
    for (i = 0; i < n; i++) {
        if (a[i] >= 0) {
            result++;
        }
    }

    return result;
}
```

### 11

```c
double inner_product(double a[], double b[], int n)
{
    int result, i;

    result = 0;
    for (i = 0; i < n; i++) {
        result += a[i] * b[i];
    }

    return result;
}
```

### 13

```c
#define SIZE 8

int evaluate_position(char board[SIZE][SIZE])
{
    int i, j, difference;

    difference = 0;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            switch (board[i][j]) {
            case 'Q':
                difference += 9;
                break;
            case 'R':
                difference += 5;
                break;
            case 'B': case 'N':
                difference += 3;
                break;
            case 'P':
                difference++;
                break;
            case 'q':
                difference -= 9;
                break;
            case 'r':
                difference -= 5;
                break;
            case 'b': case 'n':
                difference -= 3;
                break;
            case 'p':
                difference--;
                break;
            }
        }
    }

    return difference;
}
```

## Section 9.4 The return Statement

### 14

- 모든 element가 0이 아닐 때 false를 return해야 하므로 `return false`는 `for` statement가 끝난 후 실행되어야 한다. 이를 반영하면 다음과 같다.

```c
bool has_zero(int a[], int n)
{
    int i;

    for (i = 0; i < n; i ++) {
        if (a[i] == 0) {
            return true;
        }
    }

    return false;
}
```

### 15

```c
double median(double x, double y, double z)
{
    int median;

    if (x <= y) {
	if (y <= z) {
	    median = y;
	} else if (x <= z) {
	    median = z;
	} else {
	    median = x;
	}
    } else {
	if (z <= y) {
	    median = y;
	} else if (x <= z) {
	    median = x;
	} else {
	    median = z;
	}
    }

    return median;
}
```

## Section 9.6 Recursion

### 16

```c
int fact(int n)
{
    return n <= 1 ? 1 : n * fact(n - 1);
}
```

### 17

```c
int fact(int n)
{
    int result, i;

    result = 1;
    for (i = 2; i < n; i++) {
        result *= i;
    }

    return result;
}
```

### 18

```c
int gcd(int m, int n)
{
    if (n == 0) {
	return m;
    }
    return gcd(n, m % n);
}
```

### 19

1. `pb(5)`

    1. `pb(2)`

        1. `pb(1)`

            1. `pb(0)`

        2. `putchar('0' + 1 % 2)` (`putchar('1')`)

    2. `putchar('0' + 2 % 2)` (`putchar('0')`)

2. `putchar('0' + 5 % 2)` (`putchar('1')`)

```
101
```

- 10진수 `n`(`n` > 0)을 2진수로 출력한다.
