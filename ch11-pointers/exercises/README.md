# Ch11 Pointers Exercises

## Section 11.2 Pointer Variables

### 1

- a, g

## Section 11.3 Pointer Assignment

### 2

- e, f, i

## Section 11.4 Pointers as Arguments

### 3

- `avg`와 `sum`은 pointer이므로 그들이 가리키는 object에 접근하려면 indirection operatore `*`를 사용해야 한다.

```c
void avg_sum(double a[], int n, double *avg, double *sum)
{
    int i;

    *sum = 0.0;
    for (i = 0; i < n; i++)
        *sum += a[i];
    *avg = *sum / n;
}
```

### 4

```c
void swap(int *p, int *q)
{
    int temp;
    
    temp = *p;
    *p = *q;
    *q = temp;
}
```

### 5

```c
void split_time(long total_sec, int *hr, int *min, int *sec)
{
    *hr = total_sec / (60 * 60);
    total_sec %= 60 * 60;
    *min = total_sec / 60;
    total_sec %= 60;
    *sec = total_sec;
}

### 6

```c
void find_two_largest(int a[], int n, int *largest,
                      int *second_largest)
{
    int i;
    *largest = a[0];
    for (i = 0; i < n; i++) {
        if (*largest < a[i]) {
            *second_largest = *largest;
            *largest = a[i];
        }
    }
}
```

### 7

```c
void split_date(int day_of_year, int year,
                int *month, int *day)
{
    const int days = {31, 28, 31, 30, 31, 30,
                      31, 31, 30, 31, 30, 31};
    int i;

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        days[1] = 29;
    }
    for (i = 0; i < 12 && day_of_year > 0; i++) {
        day_of_year -= days[i];
    }
    *month = i - 1;
    *day += day_of_year + days[i];
}
```

## Section 11.5 Pointers as Return Values

### 8

```c
int *find_largest(int a[], int n) {
    int *max, i;

    max = &a[0];
    for (i = 0; i < n; i++) {
        if (*max < a[i]) {
            max = &a[i];
        }
    }

    return max;
}
```
