# Nate Hoffman's Math Library

One function is provided to perform all available math operations.

## Usage

Download `math.h` and `math.c` and place them in your project.
Include the library in your program by placing the following line
at the top of the file it will be used in:

```
#include "math.h"
```

The `math(int, int, char)` function can then be used. It has three parameters,
`num1`, `num2`, and `Operator`. `num1` and `num2` are integer values
used in the operation while `Operator` is a character that selects
the operation.

Examples:

```
math(1, 2, '+'); // Addition returns 3
math(1, 2, '-'); // Subtraction returns -1
math(3, 4, '*'); // Multiplication returns 12
math(9, 3, '/'); // Division returns 3
math(8, 3, '%'); // Modulus returns 2
math(2, 1, '<'); // Left shift returns 4
math(2, 1, '>'); // Right shift returns 1
math(2, 3, '&'); // Bitwise AND returns 2
math(2, 3, '|'); // Bitwise OR returns 3
math(2, 3, '^'); // Bitwise XOR returns 1
math(5, 0, '~'); // Bitwise inverse returns -6
```

Note that the second parameter in a bitwise inverse is ignored.

## Limitations

Only integer values are returned by the function. For example:

* 3/2 returns 1
* 1/3 returns 0
* 2/3 returns 0 (note that the value is not rounded up)
* -3/2 returns 1

If a 0 is passed for `num2` in the division or modulus operations,
it becomes an invalid operation and a 0 is returned by the function.
It is up to the user of the function to make sure valid inputs are
passed to the function.

## Available Operations

The operation code is the third parameter in the function call.

| Name            | Operation Code | Result       |
|-----------------|----------------|--------------|
| Addition        | +              | num1 + num2  |
| Subtraction     | -              | num1 - num2  |
| Mulitplication  | *              | num1 * num2  |
| Division        | /              | num1 / num2  |
| Modulus         | %              | num1 % num2  |
| Left Shift      | <              | num1 << num2 |
| Right Shift     | >              | num1 >> num2 |
| Bitwise AND     | &              | num1 & num2  |
| Bitwise OR      | \|             | num1 \| num2 |
| Bitwise XOR     | ^              | num1 ^ num2  |
| Bitwise Inverse | ~              | ~num1        |
