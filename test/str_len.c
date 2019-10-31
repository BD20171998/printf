#include "holberton.h"

/**
 * sum_them_all - Entry Point
 * @n: arguments of type unsigned int
 * Description: gets the sum of all parameters passed into function)?
 * Return: sum of numbers
 */

int str_len(char *s)
{

/* goes through s, adds one for everything except / or % cause its one char u */
/* go through the string itself, then the varaibles, removing any chars for special characters or formats */
	int count = 0;
	int i;

	for(i = 0; s[i]; i++)
	{
		count++;
	}

	return (count);

/* get all info on string here */

}
