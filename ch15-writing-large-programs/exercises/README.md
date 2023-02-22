# Ch15 Writing Large Programs Exercises

## Section 15.1 Source Files

### 1

#### a

- 한 소스 파일이 갖는 코드의 양이 줄어들어 한 파일 내에서 코드를 탐색하기 편리하다.

- 각 소스 파일을 따로 컴파일할 수 있어 디버깅이 쉬워진다.

- 각 소스 파일을 따로 다운로드 또는 업로드할 수 있어 편리하다.

- 각 파일에 대해 정보를 숨길 수 있다.

#### b

- 프로그램을 분석할 때 여러 파일을 열어봐야 한다.

- 컴파일, 링킹이 복잡해진다.

## Section 15.2 Header Files

### 2

- b, function definitions이 헤더 파일에 있으면 해당 헤더 파일을 포함하는 두 개 이상의 파일이 링킹될 때 문제가 발생한다.

### 3

- `include` 지시자를 포함하는 파일의 위치에 system header와 동일한 이름의 파일이 있을 때 system header가 아닌 동일한 이름을 갖는 다른 파일을 포함하여 문제가 된다.

- 동일한 이름의 파일이 없다고 하더라도 해당 파일이 system header임을 구분하기 위해 `<>`를 사용하는 게 좋을 것이다.

### 4

#### a

```
Output if DEBUT is defined:
Value of i: 1
Value of j: 2
Value of k: 3
Value of i + j: 3
Value of 2 * i + j - k: 1
```

#### b

```
Output if DEBUG is not defined:

```

#### c

- header file `debug.h`는 `DEBUG`가 정의되는지 아닌지에 따라 macro `PRINT_DEBUG`를 다르게 정의하기 때문이다.

#### d

- `debug.h`는 포함된 위치에서 `DEBUG`가 정의되었는지 아닌지를 판단하기 때문에 `debug.h`가 포함되기 전에 `DEBUG`를 정의
해야 한다.

## Section 15.4 Building a Multiple-File Program

### 5

```Makefile
demo: main.o f1.o f2.o
    gcc -o demo main.o f1.o f2.o

main.o: main.c f1.h
    gcc -c main.c

f1.o: f1.c f1.h f2.h
    gcc -c f1.c

f2.o: f2.c f1.h f2.h
    gcc -c f2.c
```

### 6

#### a

- `main.c`, `f1.c`, `f2.c`

#### b

- `f1.c`

#### c

- `main.c`, `f1.c`, `f2.c`

#### d

- `f1.c`, `f2.c`
