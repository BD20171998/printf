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
 * special_ch - function that checks for special formated characters
 * @c: Char to be checked
 * Return: 1 if special character is found, 0 otherwise
 */

int special_ch(char c)
{
	if (c == 'c' || c == 's' || c == 'i' || c == 'd' || c == 'r')
		return (1);

	else
		return (0);
}
