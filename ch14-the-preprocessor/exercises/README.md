# Ch14 The Preprocessor Exercises

## Section 14.3 Macro Definitions

### 1

#### a

```c
#define CUBE(x) ((x) * (x) * (x))
```

- `*` operator는 numeric operand에 대해서 작동하기 때문에 그 외의 argument에 대해서는 동작하지 않는다.

#### b

```c
#define REMAINDER(n) ((n) % 4)
```

- `%` operator는 integer operand에 대해서 작동하기 때문에 그 외의 argument에 대해서는 동작하지 않는다.

#### c

```c
#define CHECK_PRODUCT(x, y) ((x) * (y) < 100 ? 1 : 0
```

- `*` operator는 numeric operand에 대해서 작동하기 때문에 그 외의 argument에 대해서는 동작하지 않는다.

### 2

```c
#define NELEMS(a) ((int) (sizeof(a) / sizeof(*a)))
```

### 3

#### a

- 4

#### b

- 4

#### c

```c
#define DOUBLE(x) (2 * (x))
```

### 4

#### a

- 다음과 같은 상황에서 문제가 발생한다.

1. replacement-list의 `/`보다 precedence가 높은 연산과 함께 사용

    - `2 * AVG(1, 3)`

2. replacement-list의 `+`보다 precedence가 낮은 연산이 포함된 expression을 argument로 사용

    - `AVG(1 > 2, 3)`

- 다음과 같이 고칠 수 있다.

```c
#define AVG(x, y) (((x) + (y)) / 2)
```

#### b

- replacement-list의 `*`보다 precedence가 높은 연산과 함께 사용할 때 문제가 발생한다.

    - `2 / AREA(1, 3)`

- 다음과 같이 고칠 수 있다.

```c
#define AREA(x, y) ((x) * (y))
```

### 5

#### a

```c
D
```

#### b

```c
2
```

### 6

#### a

```c
#define DISP(f, x) (printf(#f "(%g) = %g\n", (x), (f(x))))
```

#### b

```c
#define DISP2(f, x1, x2) (printf(#f "(%g, %g) = %g\n", (x1), (x2), (f((x1), (x2)))))
```

### 7

#### a

```c
long long_max(long x, long y) { return x > y ? x : y; }
```

#### b

- `unsigned long`의 경우 공백을 포함하기 때문에 다음과 같이 확장 되어 함수가 정의되지 않는다.

```c
unsigned long unsigned long_max(unsigned long x, unsigned long y) { return x > y ? x : y; }
```

#### c

- `typedef`를 사용하여 공백이 없는 이름으로 정의하여 사용한다.

### 8

```c
#define STRINGIZE(x) STRINGIZE_BYPASS(x)
#define STRINGIZE_BYPASS(x) #x
#define LINE_FILE "Line " STRINGIZE(__LINE__) " of file " __FILE__ 
```

- replacement-list에 `##` operator가 포함되면 macro expansion이 안 되기 때문에 macro expansion을 위한 macro를 중간에 두어야 한다.

### 9

#### a

```c
#define CHECK(x, y, n) ((x) >= 0 && (x) <= (n) - 1 \
&& (y) >= 0 && (y) <= (n) - 1 ? 1 : 0)
```

#### b

```c
#define MEDIAN(x, y, z) ((x) <= (y) ? \
((y) <= (z) ? (y) : ((x) <= (z) ? (z) : (x))) : \
((z) <= (y) ? (y) : ((x) <= (z)? (x) : (z))))
```

#### c

```c
#define POLYNOMIAL(x) (3 * (x) * (x) * (x) * (x) * (x) \
+ 2 * (x) * (x) * (x) * (x) \
- 5 * (x) * (x) * (x) \
- (x) * (x) \
+ 7 * (x) \
- 6)
```

### 10

1. The compiled code will often be larger.

2. Arguments aren't type-checked.

3. It's not possible to have a pointer to a macro.

4. A macro may evaluate its arguments more than once.

### 11

```c
#define ERROR(...) fprintf(stderr, __VA_ARGS__)
```

## Section 14.4 Conditional Compilation

### 12

- c, e가 실패한다.

### 13

#### a

```c



void f(void);

int main(void)
{
    f();



    return 0;
}

void f(void)
{



    printf("N is undefined\n");

}
```

#### b

```
N is undefined

```

### 14

```c








int main(void)
{
    int a[= 10], i, j, k, m;  /* invalid expression */


    i = j;




    i = 10 * j+1;
    i = (x,y) x-y(j, k);  /* undeclared x, y, invalid expression*/
    i = ((((j)*(j)))*(((j)*(j))));
    i = (((j)*(j))*(j));
    i = jk;  /* undeclared jk */
    puts("i" "j");

    
    i = SQR(j);

    i = (j);

    return 0;
}
```

### 15

```c
#if defined(ENGLISH)
    puts("Insert Disk 1");
#elif defined(FRENCH)
    puts("Inserez Le Disque 1");
#elif defined(SPANISH)
    puts("Inserte E1 Disco 1");
#endif
```

## Section 14.5 Miscellaneous Directives

### 16

```c
_Pragma("ident \"foo\"")
```
