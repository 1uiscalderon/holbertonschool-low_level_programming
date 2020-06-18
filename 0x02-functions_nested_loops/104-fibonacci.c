#include <stdio.h>

/**
 * main - compute and prints the sum of all the multiples of 3 or 5 below 1024
 * Return: 0 is success
 */
int main(void)
{
	int n;
	unsigned long int i, j, k, j1, j2, k1, k2;

	i = 1;
	j = 2;

	for (n = 0; n < 91; n++)
	{
		printf("%ld, ", i);
		k = j  + i;
		i = j;
		j = k;
	}

	j1 = j / 1000000000;
	j2 = j % 1000000000;
	k1 = k / 1000000000;
	k2 = k % 1000000000;

	for (n = 92; n < 99; ++n)
	{
		if (n != 98)
		{
			printf("%lu", k1 + (k2 / 1000000000));
			printf("%lu, ", k2 % 1000000000);
			k1 = k1 + j1;
			j1 = k1 - j1;
			k2 = k2 + j2;
			j2 = k2 - j2;
		}
		else
		{
			printf("%lu", k1 + (k2 / 1000000000));
			printf("%lu", k2 % 1000000000);
		}
	}
	printf("\n");
	return (0);
}
