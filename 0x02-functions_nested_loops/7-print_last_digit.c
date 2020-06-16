#include "holberton.h"

/**
 * print_last_digit - prints the absolute valor of the last digit of a number
 *@n: is a parameter
 * Return: last digit
 */
int print_last_digit(int n)
{
	int l = n % 10;

	if (n >= 0)
	{
		_putchar('0' + l);
			return (l);
	}
	_putchar(-l + '0');
	return (-l);
}
