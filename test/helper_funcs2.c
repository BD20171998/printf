#include "holberton.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: char pointer to covert to number
 * Return: Integer converted from string
 */

int _atoi(char *s)
{
	int c, i = 0, j, neg = 0, num = 0, start = 0;
	unsigned int n;

	while (*(s + i) < 48 || *(s + i) > 57)
	{
		if (*(s + i) == '-')
			neg++;
		if (*(s + i) == '\0')
		{
			j = 0;
			n = j;
			return (j);
		}
		start++;
		i++;
		if (i + 1 < i)
			return (0);
	}

	while (*(s + i) >= 48 && *(s + i) <= 57)
	{
		++i;
		++num;
	}

	n = 0;
	for (c = start; c < (num + start); c++)
		n = n * 10 + s[c] - '0';

	if (neg % 2 != 0)
		n = -n;
	j = n;
	return (j);
}

/**
 * power - function that exponentiates a number
 * @base: Int to be raised
 * @n: Int for exponent
 * Return: Integer of exponentiated number
 */

int power(int base, int n)
{
	int i, p = 1;

	for (i = 0; i < n; i++)
		p = p * base;

	return (p);
}

/**
 * print_lead_oct_hex_int - function that prints an int including hexidecimals
 * with a leading 0x or 0X. Also prints octals with 0 as leading number.
 * @m: Int of number to be printed
 * Return: Integer of number of bytes printed
 */

int print_lead_oct_hex_int(int m)
{
	char *s;

	int hex = 0, h, i, j, len, oc_1, oc_2, oc_3, oct;

	len = int_len(m);

	s = itoa(m, len);

	oc_1 = s[0] - '0';
	oc_2 = s[1] - '0';
	oc_3 = s[2] - '0';

	if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
	{
		for (i = 0; i < len - 2; i++)
		{
			switch (s[i + 2])
			{
			case 'f':
				h = 15;
				break;
			case 'F':
				h = 15;
				break;
			case 'e':
				h = 14;
				break;
			case 'E':
				h = 14;
				break;
			case 'd':
				h = 13;
				break;
			case 'D':
				h = 13;
				break;
			case 'c':
				h = 12;
				break;
			case 'C':
				h = 12;
				break;
			case 'b':
				h = 11;
				break;
			case 'B':
				h = 11;
				break;
			case 'a':
				h = 10;
				break;
			case 'A':
				h = 10;
				break;
			default:
				h = s[i + 2] - '0';
			}
			j = power(16, len - 3 - i);
			hex +=  j * h;
		}
		free(s);
		return (hex);
	}

	if (len == 3 && oc_1 == 0 && (oc_2 >= 0  && oc_2 < 8) && (oc_3 >= 0 &&
								  oc_3 < 8))
	{
		oct = (8 * oc_2) + oc_3;
		return (oct);
	}

	return (m);
}
