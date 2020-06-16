#include "holberton.h"

/**
 * main - prints the alphabet using putchar
 * Return: 0 if success
 */
void print_alphabet(void)
{
	char n;

	n = 'a';

	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
