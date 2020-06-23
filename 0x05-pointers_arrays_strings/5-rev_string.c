#include "holberton.h"

/**
 *print_rev - Prints a string, in reverse, followed by a new line
 *@s: is a parameter
 */
void print_rev(char *s)
{
	char r;
	int i, j, c;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	c = i - 1;
	i = i - 1;
	for (j = 0; j <= c; j++)
	{
		r = s[j];
		s[j] = s[i];
		s[i] = r;
		i--;
	}
}
