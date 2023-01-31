# Ch5 Selection Statements

## Exercises

- page 93 ~ 95

### Section 5.1 Logical Expressions

#### 1

##### a

- `1`

##### b

- `1`

##### c

- `1`

##### d

- `0`

#### 2

##### a

- `1`

##### b

- `1` 

##### c

- `1`

##### d

- `1`

#### 3

##### a

- `1 3 4 5`

##### b

- `0 7 8 9`

##### c

- `1 8 8 9`

##### d

- `1 2 1 2`

#### 4

- `(i > j) - (i < j)`

- `i < j ? -1 : (i > j ? -1 : 0)`

### Section 5.2 The if Statement

#### 5

- legal하다.

- relational operator는 left associative하므로 주어진 expression은 `(n >= 1) <= 10`와 같다. 따라서 `n`이 0일 때 expression의 결과는 1이므로 다음을 출력한다.

```
n is between 1 and 10

```

#### 6

- legal하다.

- `-`는 arithmetic operator이므로 equality operator보다 precedence가 높다. 따라서 `n`이 5일 때 `1-10`, 즉 `-9`와 같지 않기 때문에 아무것도 출력되지 않는다.

#### 7

- `i`이 17, -17일 때 모두 다음을 출력한다.

```
17

```

#### 8

```c
teenager = age >= 13 && age <= 19;
```

#### 9

- 동일하다.

### Section 5.3

#### 10

- `onetwo`를 출력한다.

#### 11

```c
switch (area-code) {
    case 229:
        printf("Albany");
        break;
    case 404: case 470: case 678: case 770:
        printf("Atlanta");
        break;
    case 478:
        printf("Macon");
        break;
    case 706: case 762:
        printf("Columbus");
        break;
    case 912:
        printf("Savannah");
        break;
    default:
        printf("Area code not recognized");
        break;
}
```
