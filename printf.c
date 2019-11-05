#include "holberton.h"

/**
 * _printf - function that prints different formats of data and
 * returns the number of bytes sent to the output stream
 * @format: Const char pointer that contains conversion specifiers
 * Return: Int of total number of bytes printed
 */

int _printf(const char *format, ...)
{
	int byte_sum = 0, i, sp;
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
			sp = special_ch(format[i + 1]);
			if (format[i + 1] == '%')
			{
				byte_sum += _putchar(format[i + 1]);
				i++;
				continue;
			}
			if (sp == 1)
			{
				byte_sum += get_format(format[i + 1])(args);
				i++;
				continue;
			}
			else if (sp == 0)
			{
				byte_sum += _putchar(format[i]);
				byte_sum += _putchar(format[i + 1]);
				i++;
				continue;
			}
		}
		else
			byte_sum += _putchar(format[i]);
	}
	va_end(args);
	return (byte_sum);
}
