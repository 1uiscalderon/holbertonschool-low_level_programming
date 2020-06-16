#include "holberton.h"
#include <stdio.h>

/**
 * _isalpha - returns 1 if a letter is lower or upper case
 *@n: is a parameter
 * Return: 1 if c is lowercase, 0 if it isnt
 */
void print_to_98(int n)
{
	int i;
	int j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d\n", i);
		}
	}
	else
	{
		for (j = n; j >= 98; j--)
		{
			if (j != 98)
				printf("%d, ", j);
			else
				printf("%d\n", j);
		}
	}
}
