#include "holberton.h"

/**
 * main - prints Holberton
 * Return: 0 if success
 */
int main(void)
{
	int i;
	char n[9] = 'Holberton';

	for (i = 0; i < 9; i++)
	{
		_putchar (n[i]);
	}
	_putchar ('\n');
	return (0);
}
