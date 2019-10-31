#include "holberton.h"

/**
 * _printf - function that prints different formats of data and
 * returns the number of bytes sent to the output stream
 * @format: Const char pointer that contains conversion specifiers
 * Return: Int of total number of bytes printed
 */

int _printf(const char *format, ...)
{
	int byte_sum = 0, i;
	va_list args;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		va_end(args);
		return (-1);
	}

	for (i = 0; format[i]; i++)
	{

		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				byte_sum++;
				i++;
				continue;
			}

			byte_sum += get_format(format[i + 1])(args);
			i++;
			continue;
		}

		else
		{
		       write(1, &format[i], 1);
		       byte_sum += 1;
		}
	}

	va_end(args);
	return (byte_sum);
}
