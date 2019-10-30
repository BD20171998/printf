#include "holberton.h"

/**
 * _printf - Entry point
 * @format:
 * Description:)?
 * Return:
*/

int _printf(const char *format, ...)
{
	int i;
	va_list valist;
	char s; /* holds char to pass */


	if (format == NULL)
	{
		return (NULL); /* check for proper return later */
	}

	va_start(valist, format);
/* gets full length and passes to buffer */

/* change < format to < length to include the length of the variables */
	for(i = 0; i < format; i++)
	{
		if (format[i] == '/' || format[i] == '%')
		{
			/* passes to function which will append new values to str */
			func_format(format[i], format[i + 1], str, i);
		}

		else
		{
			str = format[i];
		}
	}

	va_end(valist);

/* write() - will return to function but may have t be mvoed to sperate file for malloc */

}
