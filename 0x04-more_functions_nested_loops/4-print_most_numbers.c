#include "holberton.h"

/**
 * print_most_numbers - prints the most of numbers from 0 to 9 using putchar
 *
 */
void print_most_numbers(void)
{
	char n;

	n = '0';

	while (n <= '9' && )
	{
		if (n != '2' && n != '4')
		{
		_putchar(n);
		}
		n++;
	}
	_putchar('\n');
}
