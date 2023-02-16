# Ch 13 Strings Exercises

- page 308~311

## Section 13.3 Reading and Writing Strings

### 1

- b, c, e, h, i, j는 원하는 대로 작동하지 않는다.

- b, c는 conversion specification과 output item의 타입이 맞지 않다.

- e, h, i는 argument type과 function의 parameter type이 맞지 않다. 

- j는 `\n` character 2개를 출력한다.

### 2

#### a

- illegal

- `putchar`의 parameter type은 `char`이기 때문이다.

####  b

- legal

- `a`

#### c

- legal

```
abc

```

#### d

- illegal

- `puts`의 parameter type은 `char *`이기 때문이다.

### 3

- `i`: 12

- `s`: abc34

- `j`: 56

### 4

```c
int read_line(char str[], int n)
{
    int ch, i = 0;

    /* (a) */
    while (isspace(ch = getchar()))
        ;
    /* (b), (d) */
    do {
        str[i++] = ch;
    } while (i < n && !isspace(ch = getchar()));
    /* (c) */
    str[i] = ch == '\n' ? '\n' : '\0';

    return i;
}
```

## Section 13.4 Accessing the Characters in a String

### 5

#### a

```c
void capitalize(char str[])
{
    int i;

    for (i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }
}
```

#### b

```c
void capitalize(char *str)
{
    while (*str++ = toupper(*str))
        ;
}
```

### 6

```c
void censor(char *str)
{
    while (str[0]) {
        if (str[0] == 'f' && str[1] == 'o' && str[2] == 'o') {
            str[0] = str[1] = str[2] = 'x';
        }
        str++;
    }
}
```

## Section Section 13.5 Using the C String Library

### 7

- d가 나머지와 다르다.

- d는 `str`에 저장된 string 뒤에 `""`을 추가하는 반면 나머지는 `str`의 첫번째 element에 null character를 할당한다.

### 8

- `tire-d-or-wired?`

### 9

- `computers`

### 10

- `q`는 초기화되지 않아 임의의 값을 갖고 있다. 따라서 `q`는 임의의 메모리 주소를 가리키고 있기 때문에 `q`에 string을 복사하려 하면 undefined behavior를 유발할 것이다.

### 11

```c
int strcmp(char *s, char *t)
{
    while (*s == *t++) {
        if (*s++ == '\0') {
            return 0;
        }
    }
    return *s - *t;
}
```

### 12

```c
void get_extension(const char *file_name, char *extension)
{
    while (*file_name++ != '.')
        ;
    strcpy(extension, file_name);
    extension[strlen(extension)] = '\0';
}
```

### 13

```c
void build_index_url(const char *domain, char *index_url)
{
}
```
