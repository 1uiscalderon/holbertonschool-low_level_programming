#include "holberton.h"

/**
 * print_number - Converts a string to an integer
 *@n: is a parameter
 *
 */
void print_number(int n)
{
	int i;
	unsigned int res = 0;
	int digit;
	int signo = 1;
	int flag = 0;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] == '-')
		{
			signo = signo * -1;
		}
		if (n[i] >= '0' && n[i] <= '9')
		{
			digit = n[i] - '0';
			res = res * 10 + digit;
			flag = 1;
		}
		else if (flag == 1)
		{
			break;
		}
	}
	res = res * signo;

}
