# Ch12 Pointers and Arrays Exercises

- page 273~275

## Section 12.1 Pointer Arithmetic

### 1

#### a

- 14

#### b

- 34

#### c

- 4

#### d

- true

#### e

- false

### 2

- C는 두 pointer를 더하는 연산을 지원하지 않기 때문에 illegal하다.

```c
middle = low + (high - low) / 2;
```

## Section 12.2 Using Pointers for Array Processing

### 3

- 10, 9, 8, 7, 6, 5, 4, 3, 2, 1

### 4

```c
bool is_empty(void)
{
    return top_ptr == contents;
}

bool is_full(void)
{
    return top_ptr == contents + STACK_SIZE;
}

void make_empty(void)
{
    top_ptr = contents;
}
```

## Section 12.3 Using an Array Name as a Pointer

### 5

- mismatched types: a

- true: b, c, d

### 6

```c
int sum_array(const int *a, int n) 
{
    int sum, *p;
    
    sum = 0;
    for (p = a; p < p + n; p++) {
        sum += *p;
    }

    return sum;
}
```

### 7

```c
bool search(const int *a, int n, int key)
{
    int *p;

    for (p = a; p < p + n; p++) {
        if (*p == key) {
            return true;
        }
    }

    return false;
}
```

### 8

```c
void store_zeros(int *a, int n)
{
    int *p;

    for (p = a; p < p + n; p++) {
        *p = 0;
    }
}
```

### 9

```c
double inner_product(const double *a, const double *b,
                     int n)
{
    double result, *p, *q;

    result = 0.0;
    for (p = a, q = b; p < p + n; p++, q++) {
        result += *p * *q;
    }

    return result;
}
```

### 10

```c
int *find_middle(int *a, int n)
{
    return a + n / 2;
}
```

### 11

```c
int find_largest(int *a, int n)
{
    int max, *p;

    max = *a;
    for (p = a + 1; p < a + n; p++) {
        if (*p > max) {
            max = *p;
        }
    }

    return max;
}
```

### 12

```c
void find_two_largest(const int *a, int n, int *largest,
                      int *second_largest)
{
    int *p;

    *largest = *second_largest = *a;
    for (p = a + 1; p < p + n; p++) {
        if (*largest < *p) {
            *second_largest = *largest;
            *largest = *p;
        }
    }
}
```

## Section 12.4 Pointers and Multidimensional Arrays

### 13

```c
#define N 10

double ident[N][N], *p;

for (p = *ident; p < *ident + N * N; p++) {
    if ((p - *ident) % (N + 1) == 0) {
        *p = 1.0;
    } else {
        *p = 0.0;
    }
}
```

### 14

- `search(*temperatures, 7 * 24, 32)`

### 15

```c
int *p;

for (p = temperatures[i]; p < temperatures[i] + 24; p++) {
    printf("%d", *p);
}
```

### 16

```c
int i;

for (i = 0; i < 7; i++) {
    printf("%d ", find_largest(temperatures[i], 24));
}
```

### 17

```c
int sum_two_dimensional_array(const int a[][LEN], int n)
{
    int sum, *p;

    sum = 0;
    for (p = *a; p < *a + n * LEN; p++) {
        sum += *p;
    }

    return sum;
}
```

### 18

```c
#define SIZE 8

int evaluate_position(char board[SIZE][SIZE])
{
    int difference;
    char *p;

    difference = 0;
    for (p = *board; p < *board + SIZE * SIZE; p++) {
        switch (*p) {
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

    return difference;
}
```
