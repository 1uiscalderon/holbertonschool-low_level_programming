#include "holberton.h"

/**
 *_puts - Prints a string, followed by a new line
 *@str: is a parameter
 */
void _puts(char *str)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
