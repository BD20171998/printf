# 0x11. C - printf

## Description

This team project is part of the first year curriculum of Holberton School.
\_printf replicates the C standard library printf() function.

What you should learn from this project:

- How to use git in a team setting
- Applying variadic functions to a big project
- The complexities of printf
- Managing a lot of files and finding a good workflow

## Prototype

`int _printf(const char *format, ...);`

## Usage

- Prints a string to the standard output, according to a given format
- All files were created and compiled on Ubuntu 14.04.4 LTS using GCC 4.8.4 with the command `gcc -Wall -Werror -Wextra -pedantic *.c`
- All files were linted for syntax and style with [Betty](https://github.com/holbertonschool/Betty)
- Returns the number of characters in the output string on success, -1 otherwise
- Call it this way: `_printf("format string", arguments...)` where `format string` can contain conversion specifiers and flags,
  along with regular characters

## Examples

- `_printf("Hello, Holberton\n")` _prints "Hello, Holberton", followed by a new line_
- `_printf("%s", "Hello")` _prints "Hello"_
- `_printf("This is a number: %d", 98)` _prints "This is a number: 98"_

# Tasks

These are all the tasks of this project, the ones that are completed link to the corresponding files.

### [0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life](./printf.c)

- Write a function that produces output according to format.
  - Prototype: int \_printf(const char \*format, ...);
  - Returns: the number of characters printed (excluding the null byte used to end output to strings)
  - write output to stdout, the standard output stream
  - format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
    - c : converts input into a character
    - s : converts input into a string

### [1. Education is when you read the fine print. Experience is what you get if you don't](./print_nums.c)

- Handle the following conversion specifiers:
  - d : converts input into a base 10 integer
  - i : converts input into an integer

### [2. Just because it's in print doesn't mean it's the gospel](./man_3_printf)

- Create a man page for your function

### [3. With a face like mine, I do better in print](./helper_funcs2.c)

- Handle the following conversion specifiers:
  - b : the unsigned int argument is converted to binary

```sh
alex@ubuntu:~/c/printf$ cat main.c
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("%b\n", 98);
    return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic main.c
alex@ubuntu:~/c/printf$ ./a.out
1100010
```


### [14. Print is the sharpest and the strongest weapon of our party](./helper_funcs.c)

- Handle the following custom conversion specifier:
  - r : prints the reversed string

### [15. The flood of print has turned reading into a process of gulping rather than savoring](./helper_funcs2.c)

- Handle the following custom conversion specifier:
  - R : prints the rot13'ed string


### Authors

- **Kyle Campbell** - (https://github.com/waffle52)
- **Bob Deprizio** - (https://github.com/BD20171998)
