# Ch2 C Fundamentals

## Exercises

### Section 2.1

#### 1

```sh
$ gcc -O -Wall -W -pedantic -ansi -std=c89 hello-world.c
01.c: In function ‘main’:
01.c:6:1: warning: control reaches end of non-void function [-Wreturn-type]
    6 | }
      | ^
$
```

- main 함수 마지막에 `return 0;`을 추가한다.

```sh
$ gcc -O -Wall -W -pedantic -ansi -std=c89 01.c
$
```

### Section 2.2

#### 2

##### a

- directives 1개: `#include`

- statements 4개:

    - `printf("Parkinson's Law:\nWork expands so as to ");`

    - `printf("fill the time\n");`

    - `printf("available for its completion.\n");`

    - `return 0;`

##### b

```sh
Parkinson's Law:
Work expands so as to fill the time
available for its completion
```

#### 3

- `03.c`

#### 4

- `04.c`

```sh
$ gcc 04.c
$ ./a.out
(int) a: 0, b: 0, c: 0, d: 0, e: -906662624
(float) f: 4.56515e-41, g: -2.02274e+06, h: 0, i: 0, j: 4.56515e-41
$ ./a.out
(int) a: 0, b: 0, c: 0, d: 0, e: 1629396256
(float) f: 4.55828e-41, g: 1.84588e+20, h: 0, i: 0, j: 4.55828e-41
$ ./a.out
(int) a: 0, b: 0, c: 0, d: 0, e: -909259488
(float) f: 4.58897e-41, g: -1.69813e+06, h: 0, i: 0, j: 4.58897e-41
$ ./a.out
(int) a: 0, b: 0, c: 0, d: 0, e: -76776160
(float) f: 4.58491e-41, g: -1.23566e+36, h: 0, i: 0, j: 4.58491e-41
$ ./a.out
(int) a: 0, b: 0, c: 0, d: 0, e: -642061024
(float) f: 4.57132e-41, g: -6.62932e+15, h: 0, i: 0, j: 4.57132e-41
$ ./a.out
(int) a: 0, b: 0, c: 0, d: 0, e: -1850385120
(float) f: 4.57944e-41, g: -2.88493e-28, h: 0, i: 0, j: 4.57944e-41
$ ./a.out
(int) a: 0, b: 0, c: 0, d: 0, e: 1769819424
(float) f: 4.56095e-41, g: 1.92515e+25, h: 0, i: 0, j: 4.56095e-41
$ ./a.out
(int) a: 0, b: 0, c: 0, d: 0, e: 256953632
(float) f: 4.55898e-41, g: 1.03682e-29, h: 0, i: 0, j: 4.55898e-41
```

- `a`, `b`, `c`, `d`, `h`, `i`는 0으로  출력된다.

- `f`, `j`는 동일한 값을 가지며, 4.6e-41에 가까운 값이 출력된다.

### Section 2.7

#### 5

- a는 숫자로 시작하기 때문에 legal C identifier가 아니다.

#### 6

- traditional C에서 가독성을 위해 필요한 부분에서 underscore를 하나씩 삽입하는 것이 일반적이다. 두 개 이상의 underscore를 연달아 사용하는 것은 가독성에 도움되지 않고, 몇 개의 underscore를 사용했는지 식별하기도 어렵기 때문에 좋은 생각이 아니다.

#### 7

- a, e가 C에서 keyword이다.

### Section 2.8

#### 8

- token 14개: `answer`, `=`, `(`, `3`, `*`, `q`, `-`, `p`, `*`, `p`, `)`, `/`, `3`, `;`

#### 9

```c
answer = (3 * q - p * p) / 3;
```

#### 10

- `#include` `<stdio.h> 사이

- `#include <stdio.h>`와 `int main(void)` 사이

- `int`와 `main(void)` 사이

- `int`와 `height` 사이

- `return`과 `0` 사이
