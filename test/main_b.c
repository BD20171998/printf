#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2, len3, len4, len5, len6, len7, len8;



	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
/*	ui = (unsigned int)INT_MAX + 1024;*/
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);


	len3=_printf("Negative:[%d]\n", -762534);
	len4=printf("Negative:[%d]\n", -762534);
	_printf("Length:[%d, %i]\n", len3, len3);
	printf("Length:[%d, %i]\n", len4, len4);

/*	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
*/
	len5=_printf("Character:[%c]\n", 'H');
	len6=printf("Character:[%c]\n", 'H');
	_printf("Length: [%d, %i]\n", len5,len5);
	printf("Length:[%d %i]\n", len6,len6);

	len7=_printf("String:[%s]\n", "I am a string !");
	len8=printf("String:[%s]\n", "I am a string !");
	_printf("Length:[%d, %i]\n", len7, len7);
	printf("Length:[%d, %i]\n", len8, len8);

	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	return (0);
}
