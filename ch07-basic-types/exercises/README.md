# Ch7 Basic Types Exercises

- page 155 ~ 157

## Section 7.1 Integer Types

### 1

#### a

- 63

#### b

- 119

#### c

- 2748

## Section 7.2 Floating Types

### 2

- c, d가 not legal하다.

- a, b, e는 floating-point이다.

### 3

- b가 not legal하다.

## Section 7.3 Character Types

### 4

- d가 not legal하다.

### 5

- b가 not legal하다.

### 6

#### a

- 최댓값이 31이므로 1 byte 공간을 갖는 `char`를 사용한다.

#### b

- 최댓값이 366이므로 최소 2 bytes 공간을 갖는 `short`를 사용한다.

#### c

- 최댓값이 24 * 60 = 1440이므로 최소 2 bytes 공간을 갖는 `short`를 사용한다.

#### d

- 최댓값이 24 * 60 * 60 = 86400이므로 최소 4 bytes 공간을 갖는 `long`을 사용한다.

### 7

#### a

- `\10`

#### b

- `\12`

#### c

- `\15`

#### d

- `\11`

### 8

#### a

- `\x08`

#### b

- `\x0a`

#### c

- `\x0d`

#### d

- `\x09`

## Section 7.4 Type Conversion

### 9

- `int`

### 10

- `unsigned int`

### 11

- `double`

### 12

- `i`가 `float`으로 convert되고 `i + f`를 수행하고, 그 결과는 `double`로 convert되어 `d`에 assign된다.

### 13

#### a

- value: -3, type: `int`

#### b

- value: 7, type: `long`

#### c

- value: 6.5, type: `float`

#### d

- value: 3.75, type: `double`

#### e

- value: -1, type: `double`

#### f

- value: 6, type: `int`

### 14

- `f`가 `int`가 저장할 수 있는 최댓값을 초과하는 값을 가질 경우 잘못 계산할 수 있다.

## Section 7.5 Type Definitions

### 15

```c
typedef char Int8;
typedef short Int16;
typedef int Int32;
```
