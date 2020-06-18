#include "holberton.h"

/**
 * print_alphabet - prints the alphabet using putchar
 * Return: 0 if success
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n ; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
