#include "holberton.h"

/**
 *_atoi - Converts a string to an integer
 *@s: is a parameter
 */
int _atoi(char *s)
{
	int i, res, num, signo = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			signo = -signo;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = s[i];
			num = num - '0';
			res = res + (num * 10);
		}
		else
		{
			break;
		}
	}
	res = res * signo;
	return (res);
}
