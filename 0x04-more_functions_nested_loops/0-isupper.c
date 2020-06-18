#include "holberton.h"

/**
 * _isupper - Returns 1 if is upper 0 if not
 *@c: is a parameter
 * Return: 1 if c is lowercase, 0 if it isnt
 */
int _isupper(int c);
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
