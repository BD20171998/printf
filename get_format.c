#include "holberton.h"

/**
 * get_format - function that selects the correct helper function for printing
 * @s: Char pointer for function to be called
 * Return: Function pointer for correct function to be used, NULL if operation
 * is not found
 */

int (*get_format(char s))(va_list)
{
	hf ops[] = {
		{'c', print_ch},
		{'s', print_str},
		{'i', print_int},
		{'d', print_int},
		{'r', print_rev_str},
		{'b', print_bin},
		{'R', print_rot13},
		{'\0', NULL}
	};

	int i = 0;

	while (ops[i].c)
	{
		if (s == ops[i].c)
			return (ops[i].f);
		i++;
	}

	return (ops[i].f);
}
