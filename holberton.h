#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct helper_funcs - Helper functions and cases
 * @c: Char for format
 * @f: Function pointer for helper function to call
 */

typedef struct helper_funcs
{
	char c;
	int (*f)(va_list);
} hf;

int _printf(const char *format, ...);
int print_str(va_list);
int print_ch(va_list);
int print_int(va_list);
int _putchar(char c);

int (*get_format(char s))(va_list);

#endif
