#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_int - Prints an integer and retruns number of bytes printed
 * @argu: va_list input
 * Return: On number of bytes printed
 */

int print_int(va_list argu)
{
	int count = 0, length = 0, j, n;
	unsigned int base = 1, d, max;

	n = va_arg(argu, int);

	if (n < 0)
	{
		n = -n;
		_putchar('-');
		count = 1;
	}

	max = n;
	d = max;

	do {
		d /= 10;
		++length;
	} while (d != 0);

	count += length;

	for (j = 0; j < length -  1; j++)
		base = base * 10;

	_putchar('0' + (max / base));

	if (length > 1)
	{
		for (j = 0; j < length - 2; j++)
		{
			base /= 10;
			d = max / base;
			_putchar('0' + d % 10);
		}
		_putchar('0' + (max % 10));
	}
	return (count);
}

/**
 * print_ch - Function that prints character to output stream and returns
 * number of bytes printed
 * @argu: va_list input
 * Return: 1 for size of char
 */

int print_ch(va_list argu)
{
	char c;

	c = (char)va_arg(argu, int);

	write(1, &c, 1);

	return (1);
}

/**
 * print_str - Function that prints a string of charracters to output stream
 * and returns number of bytes printed
 * @argu: va_list input
 * Return: Int for size of character string passed
 */

int print_str(va_list argu)
{
	char *s;
	char *nu = "(null)";

	int count = 0, i;

	s = va_arg(argu, char *);

	if (s == NULL)
	{
		write(1, nu, 6);
		return (6);
	}

	for (i = 0; s[i]; i++)
		count++;

	write(1, s, count);

	return (count);
}

/**
 * print_rev_str - Function that prints a string of charracters to output
 * stream in reverse and returns number of bytes printed
 * @argu: va_list input
 * Return: Int for size of character string passed
 */

int print_rev_str(va_list argu)
{
	char *s;
	char *t;
	char *nu = "(null)";

	int count = 0, i;

	s = va_arg(argu, char *);

	for (i = 0; s[i]; i++)
		count++;

	t = malloc(sizeof(char) * (count + 1));

	if (s == NULL || t == NULL)
	{
		write(1, nu, 6);
		return (6);
	}

	for (i = 0; s[i]; i++)
		t[i] = s[i];

	t = reverse(t);

	write(1, t, count);
	free(t);
	return (count);
}
