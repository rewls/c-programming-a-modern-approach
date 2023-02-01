# Ch6 Loops

## Exercises

- page 121 ~ 122

### Section 6.1 The while Statement

#### 1

- `1 2 4 8 16 32 64 128 `

### Section 6.2 The do Statement

#### 2

- `9384 938 93 9 `

### Section 6.3 The for Statement

#### 3

- `5 4 3 2 `

#### 4

- c가 다르다. a, b는 loop iteration 끝에서 `i`를 increment하는 반면, c는 controlling expression에서 평가될 때, 즉 loop body를 실행하기 전에 `i`를 increment하기 때문이다.

#### 5

- c가 다르다. a, b는 controlling expression을 평가하고 loop body를 실행하는 반면, c는 loop body를 실행하고 controlling expression을 실행하기 때문이다.

#### 6

```c
for (i = 1; i < = 128; i *= 2) {
    printf("%d ", i);
```

#### 7

```c
for (i = 9384; i > 0; i /= 10) {
    printf("%d ", i);
}
```

#### 8

- `10 5 3 2 1 1 1 1 ...`

#### 9

```c
i = 10;
while (i >= 1) {
    printf("%d ", i++);
    i /= 2;
}
```

### Section 6.4 Exiting from a loop

#### 10

- loop body 끝에 `label: ;`을 넣고 `continue;` 대신 `goto label;`을 사용한다.

#### 11

```c
20

```

#### 12

```c
for (d = 2; d * d <= n; d++) {
    if (n % d == 0) {
        break;
    }
}
```

#### 13

```c
for (n = 0; m > 0; n++, m /= 2)
    ;
```

#### 14

- if statement에 null statement가 사용되어 `n % 2 == 0`이 true인지 false인지에 관계없이 `printf`가 실행된다.

- `n % 2 == 0`이 true일 때만 `printf`를 실행하려면 다음과 같이 작성할 수 있다:

```c
if (n % 2 == 0) {
    printf("n is even\n");
}
```
