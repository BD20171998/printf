#include "holberton.h"

/**
 * reverse - Function that reverses an array of characters
 * @s: Char array
 * Return: Char pointer with characters that have been reversed
 */

char *reverse(char *s)
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
 * special_ch - function that checks for special formated characters
 * @c: Char to be checked
 * Return: 1 if special character is found, 0 otherwise
 */

int special_ch(char c)
{
	if (c == 'c' || c == 's' || c == 'i' || c == 'd' || c == 'r' ||
	    c == 'b')

		return (1);

	else
		return (0);
}

/**
 * print_bin - function that prints an integer in its binary form
 * and returns number of bytes printed
 * @argu: va_list input
 * Return: Int for number of integers printed
 */

int print_bin(va_list argu)
{
	int count = 0, j, n, size;

	unsigned long int msb = 1;

	n = va_arg(argu, int);

	size = (sizeof(int) * 8) - 1;

	msb = msb << size;

	for (j = size; j >= 0; j--)
	{
		if ((msb & n) == msb)
			break;

		msb = msb >> 1;
	}

	if (msb == 0)
	{
		_putchar('0');
		return (1);
	}

	while (msb != 0)
	{
		if ((msb & n) == msb)
			_putchar('1');

		else
			_putchar('0');

		msb = msb >> 1;

		++count;
	}

	return (count);
}
