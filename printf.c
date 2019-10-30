#include "holberton.h"

/**
 * _printf - function that prints different formats of data and
 * returns the number of bytes sent to the output stream
 * @format: Const char pointer that contains conversion specifiers
 * Return: Int of total number of bytes printed
 */

int _printf(const char *format, ...)
{

	int byte_sum = 0, i, l, m, n;
	char *s;
	char *t;
	char c;

	va_list args;

	va_start(args, format);

	if (format == NULL)
	{
		va_end(args);
		return (-1);
	}

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
			case 'i':
				m = va_arg(args, int);
				n = print_lead_oct_hex_int(m);
				l = int_len(n);
				t = itoa(n, l);
				byte_sum += print_str(t);
				free(t);
				i += 2;
				break;

			case 's':
				s = va_arg(args, char *);
				byte_sum += print_str(s);
				i += 2;
				break;

			case 'd':
				n = va_arg(args, int);
				l = int_len(n);
				s = itoa(n, l);
				byte_sum += print_str(s);
				free(s);
				i += 2;
				break;

			case 'c':
				c = (char) va_arg(args, int);
				byte_sum += print_ch(c);
				i += 2;
				break;

			case '%':
				c = '%';
				byte_sum += print_ch(c);
				i += 2;
			}
		}

		c = format[i];
		s = &c;
		write(1, s, 1);
		byte_sum++;
	}
	va_end(args);
	return (byte_sum);
}
