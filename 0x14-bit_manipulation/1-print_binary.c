#include "holberton.h"

/**
 * print_binary - Converts a number to binary
 * @n: Number to convert
 */
void print_binary(unsigned long int n)
{
	int i, cont = 0;
	unsigned long int num;

	i = n;

	if (i < 0)
		n = 0;

	for (i = 31; i >= 0; i--) /*32 bits tamaño de un unsigned long int*/
	{
		num = n >> i;

		if (num & 1)
		{
			_putchar('1');
			cont++;
		}
		else if (cont != 0)
			_putchar('0');
	}
	if (cont == 0)
		_putchar('0');
}
