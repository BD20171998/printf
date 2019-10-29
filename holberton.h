#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_str(char *s);
int print_ch(char s);
int int_len(int n);
char *itoa(int n, int l);
char *reverse(char s[]);

int _atoi(char *s);
int power(int base, int n);
int print_lead_oct_hex_int(int m);

#endif
