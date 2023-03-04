# Ch16 Structures, Unions, and Enumerations Exercises

- page 407~412

## Section 16.1 Structure Variables

### 1

- 각각의 structure는 member에 대해 개별 name space를 갖기 때문에 프로그램의 identifier들과 충돌하지 않는다.

### 2

#### a

```c
struct {
    double real, imaginary;
} c1, c2, c3;
```

#### b

```c
struct {
    double real, imaginary;
} c1 = {1.0, 0.0}, c2 = {1.0, 0.0}, c3;
```

#### c

- 한 statement로 수행될 수 있다.

```c
c1 = c2;
```

#### d

```c
c3.real = c1.real + c2.real;
c3.imaginary = c1.imaginary + c2.imaginary;
```

## Section 16.2

### 3

#### a

```c
struct complex {
    double real, imaginary;
};
```

#### b

```c
struct complex c1, c2, c3;
```

#### c

```c
struct complex make_complex(double real, double imaginary)
{
    return (struct complex) {real, imaginary};  /* C99 Only */
}
```

#### d

```c
struct complex add_complex(struct complex a, struct complex b)
{
    /* C99 Only */
    return (struct complex) {a.real + b.real, a.imaginary + b.imaginary};
}
```

### 4

#### a

```c
typedef {
    double real, imageinary;
} Complex;
```

#### b

```c
Complex c1, c2, c3;
```

#### c

```c
Complex make_complex(double real, double imaginary)
{
    return (Complex) {real, imaginary};  /* C99 Only */
}
```

#### d

```c
Complex add_complex(Complex a, Complex b)
{
    /* C99 Only */
    return (Complex) {a.real + b.real, a.imaginary + b.imaginary};
}
```

### 5

#### a

```c
int day_of_year(struct date d)
{
    const int day_of_month[N_MONTHS] = {31, 28, 31, 30, 31, 30,
                                        31, 31, 30, 31, 30, 31},
    int n_days, i;

    if (d.month >= 2 && d.year % 4 == 0 && (d.year % 100 != 0 || d.year % 400 == 0)) {
        day_of_month[2 - 1]++;
    }

    n_days = 0;
    for (i = 1; i < d.month; i++) {
        n_days += day_of_month[i - 1]; 
    }
    n_days += d.day;

    return n_days;
}
```

#### b

```c
int compare_dates(struct date d1, struct date d2)
{
    int d1_unified = unify_date(d1), d2_unified = unify_date(d2);

    return d1_unified < d2_unified ? -1 :
           d1_unified > d2_unified ?  1 : 0;
}

int unify_date(struct date d)
{
    return d.year * 366 + d.month * 31 + d.day;
}
```

### 6

```c
struct time split_time(long total_seconds)
{
    /* C99 Only */
    return (struct time) {total_seconds / (NUM_MINUTES * NUM_SECONDS),
                          total_seconds % (NUM_MINUTES * NUM_SECONDS) / NUM_SECONDS,
                          total_seconds % NUM_SECONDS};
}
```

### 7

#### a

```c
struct fraction reduce_fraction(struct fraction f)
{
    int gcd = compute_gcd(f);

    /* C99 Only */
    return (struct fraction) {f.numerator / gcd, f.denominator / gcd};
}

int compute_gcd(struct fraction f)
{
    int temp;

    while (f.denominator != 0) {
        temp = f.numerator % f.denominator;
        f.numerator = f.denominator;
        f.denominator = temp;
    }

    return f.numerator;
}
```

#### b

```c
struct fraction add_fraction(struct fraction f1, struct fraction f2)
{
    /* C99 Only */
    return reduce_fraction((struct fraction) {
            f1.numerator * f2.denominator + f2.numerator * f1.denominator,
            f1.denominator * f2.denominator
            });
}
```

#### c

```c
struct fraction subtract_fraction(struct fraction f1, struct fraction f2)
{
    /* C99 Only */
    return reduce_fraction((struct fraction) {
            f1.numerator * f2.denominator - f2.numerator * f1.denominator,
            f1.denominator * f2.denominator
            });
}
```

#### d

```c
struct fraction multiply_fraction(struct fraction f1, struct fraction f2)
{
    /* C99 Only */
    return reduce_fraction((struct fraction) {
            f1.numerator * f2.numerator, f1.denominator * f2.denominator
            });
}
```

#### e

```c
struct fraction divide_fraction(struct fraction f1, struct fraction f2)
{
    /* C99 Only */
    return reduce_fraction((struct fraction) {
            f1.numerator * f2.denominator, f1.denominator / f2.numerator
            });
}
```

### 8

#### a

```c
const struct color MAGENTA = {255, 0, 255};
```

#### b

```c
const struct color MAGENTA = {.red = 255, .blue = 255};
```

### 9

#### a

```c
int process_bound(int n);

struct color make_color(int red, int green, int blue) {
    /* C99 Only */
    return (struct color) {
        process_bound(red), process_bound(green),
        process_bound(blue)
    };
}

int process_bound(int n)
{
    return n < 0 ? 0 : n > 255 ? 255 : n;
}
```

#### b

```c
int getRed(struct color c)
{
    return c.red;
}
```

#### c

```c
bool equal_color(struct color color1, struct color color2)
{
    return color1.red == color2.red &&
           color1.green == color2.green &&
           color1.blue == color2.blue
}
```

#### d

```c
struct color brighter(struct color c)
{
    if (c.red + c.green + c.blue == 0) {
        return (struct color) {3, 3, 3};
    }

    int *p;
    for (p = &c.red; p <= &c.blue; p++) {
        if (*p > 0 && *p < 3) {
            *p = 3;
        }
        *p /= 0.7;
        if (*p > 255) {
            *p = 255;
        }
    }

    return c;
}
```

#### e

```c
struct color darker(struct color c)
{
    /* C99 Only */
    return (struct color) {
        c.red * 0.7, c.green * 0.7, c.blue * 0.7
    };
}
```

## Section 16.3 Nested Arrays and Structures

### 10

#### a

```c
int compute_area(struct rectangle r)
{
    return (r.upper_left.y - r.lower_right.y) *
           (r.lower_right.x - r.upper_left.x);
}
```

#### b

```c
struct point compute_center(struct rectangle r)
{
    /* C99 Only */
    return (struct point) {
        (r.upper_left.x + r.lower_right.x) / 2,
        (r.upper_left.y + r.lower_right.y) / 2
    };
}
```

#### c

```c
struct rectangle move(struct rectangle r, int x, int y)
{
    /* C99 Only */
    return (struct rectangle) {
        (struct point) {r.upper_left.x + x, r.upper_left.y + y},
        (struct point) {r.lower_right.x + x, r.lower_right.y + y}
    };
}
```

#### d

```c
bool is_in(struct rectangle r, struct point p)
{
    return p.x > r.upper_left.x && p.x < r.lower_right.x &&
           p.y < r.upper_left.y && p.y > r.lower_right.y;
}
```

## Section 16.4 Unions

### 11

- 20

### 12

- 16

### 13

#### a

- legal

#### b

- legal

#### c

- illegal

```c
s.u.rectangle.height = 25;
```

#### d

- legal

#### e

- illegal

```c
s.u.circle.radius = 5;
```

#### f

- illegal

```c
s.u.circle.radius = 5;
```

### 14


