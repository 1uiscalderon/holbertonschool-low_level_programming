#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers
 * Return: 0 is success
 */
int main(void)
{
	int n;
	unsigned long int i, j, i1, i2, j1, j2;

	i = 1;
	j = 2;

	printf("%lu", i);

	for (n = 1; n < 91; n++)
	{
		printf(", %ld", j);
		j = j + i;
		i = j - i;
	}

	i1 = i / 1000000000;
	i2 = i % 1000000000;
	j1 = j / 1000000000;
	j2 = j % 1000000000;

	for (n = 92; n < 99; n++)
	{
		printf(", %lu", j1 + (j2 / 1000000000));
		printf("%lu", j2 % 1000000000);
		j1 = j1 + i1;
		i1 = j1 - i1;
		j2 = j2 + i2;
		i2 = j2 - i2;
	}
	printf("\n");
	return (0);
}
