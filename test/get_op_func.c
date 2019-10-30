#include "holberton.h"

/**
 * *get_op_func - Entry Point
 * @s: given string to find symbol to match
 * Description: matches s to symbol in struct and returns f to call function)?
 * Return: integer
 */
​
int (*get_op_func(char *s))(va_arg)
{
	func ops[] = {
		{"c", print_ch},
		{"s", print_str},
		{"i", print_str},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op)
	{
		if (s[0] == ops[i].op[0] && s[1] == '\0')
			return (ops[i].f);
		i++;
	}


	exit(99);
}
