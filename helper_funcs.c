#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * reverse - Function that reverses an array of characters
 * @s: Char array
 * Return: Char pointer with characters that have been reversed
 */

char *reverse(char s[])
{
	int c, i, j, len = 0;

	for (i = 0; s[i]; i++)
		++len;

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}

	return (s);
}

/**
 * itoa - Function that converts an integer to a string of chars
 * @n: Int to convert
 * @l: Int for length of int to convert
 * Return: Char pointer converted from integer passed
 */

char *itoa(int n, int l)
{
	char *s;

	unsigned int d, max;

	int i, sign;

	sign = n;

	s = malloc(sizeof(char *) * (l + 1));

	if (n < 0)
		n = -n;

	max = n;
	d = max;

	i = 0;

	do {
		s[i++] = (d % 10) + '0';
	} while (d /= 10);

	if (sign < 0)
		s[i++] = '-';

	s[i] = '\0';

	return (reverse(s));
}

/**
 * int_len - Function that returns length of an integer of any size
 * @n: Int passed to function
 * Return: Int for length of number
 */

int int_len(int n)
{
	int length = 0;
	unsigned int  d, max;

	if (n < 0)
	{
		n = -n;
		length++;
	}

	max = n;
	d = max;

	do {
		d /= 10;
		++length;
	} while (d != 0);

	return (length);
}

/**
 * print_ch - Function that prints character to output stream and returns
 * number of bytes printed
 * @s: Char to be printed
 * Return: 1 for size of char
 */

int print_ch(char s)
{
	write(1, &s, 1);

	return (1);
}

/**
 * print_str - Function that prints a string of charracters to output stream
 * and returns number of bytes printed
 * @s: Char pointer to be printed
 * Return: Int for size of character string passed
 */

int print_str(char *s)
{
	int count = 0, i;

	for (i = 0; s[i]; i++)
		count++;

	write(1, s, count);

	return (count);
}
