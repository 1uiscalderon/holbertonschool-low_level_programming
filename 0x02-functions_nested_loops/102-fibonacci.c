#include <stdio.h>

/**
 * main - compute and prints the sum of all the multiples of 3 or 5 below 1024
 * Return: 0 is success
 */
int main(void)
{
	long int i, j, k, n;

	i = 1;
	j = 2;

	for (n = 0; n < 50; n++)
	{
		if (n < 49)
		{
			printf("%ld, ", i);
			k = j  + i;
			i = j;
			j = k;
		}
		else
		{
			printf("%ld\n", i);
		}
	}
		return (0);
}
