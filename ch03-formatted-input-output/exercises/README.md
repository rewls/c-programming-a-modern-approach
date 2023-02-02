# Ch03 Formatted Input/Output Exercises

## Section 3.1 The printf Function

### 1

#### a

- `    86,1040`

#### b

- ` 3.02530e+01`

#### c

- `83.162`

#### d

- `1e-06 `   

### 2

#### a

```c
printf("%-8.1e", x);
```

#### b

```c
printf("%10.6e", x);
```

#### c

```c
printf("%-8.3f", x);
```

#### d

```c
printf("%6.0f", x);
```

## Section 3.2 The scanf Function

### 3

#### a

- 동일하다.

#### b

- `1 -1-1`이 입력될 경우, 전자는 첫번째 1만 읽고 중단하지만 후자는 1 세 개 모두를 읽기 때문에 다르다.

#### c

- `1 `이 입력될 경우, 전자는 1 뒤의 white-space를 읽지 않기 때문에 입력에 white-space가 남아있고 후자는 1 뒤의 white-space를 읽기 때문에 white-space가 남지 않는다.

#### d

- 동일하다.

### 4

- `i`의 값은 `10`, `x`의 값은 `0.3f`, `j`의 값은 `5`이다.

### 5

- `x`의 값은 `12.3f`, `i`의 값은 `45`, `y`의 값은 `0.6f`이다.

### 6

- `06.c`
