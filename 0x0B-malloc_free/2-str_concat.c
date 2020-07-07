#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings
 * @s1: String 1
 * @s2: String 2
 *Return: Pointer of the concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, len;
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	s3 = (char *)malloc((i + j - 1) * sizeof(char));

	if (s3 == NULL)
	{
		return (NULL);
	}
	for (len = 0; len < i; len++)
	{
		s3[len] = s1[len];
	}
	for ( ; len <= (i + j); len++)
	{
		s3[len] = s2[len - i];
		}
	return (s3);
}