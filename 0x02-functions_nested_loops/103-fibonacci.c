#include <stdio.h>

/**
 * main -Program that finds and prints the sum of the even-valued terms
 * in fibonacci sequence under 4000000
 * Return: 0 is success
 */
int main(void)
{
	int n;
	long int i, j, k, suma;

	i = 1;
	j = 2;
	suma = 0;

	for (n = 0; n <= 33; n++)
	{
		if (i < 4000000 && (i % 2) == 0)
		{
			suma = suma + i;
		}
		k = j  + i;
		i = j;
		j = k;
	}
	printf("%lu\n", suma);

		return (0);
}
