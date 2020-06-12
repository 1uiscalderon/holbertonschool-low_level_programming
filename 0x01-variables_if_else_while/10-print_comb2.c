#include <stdio.h>

/**
 * main - prints the alphabet using putchar
 * Return: 0 if success
 */
int main(void)
{
	int n = 48;
	int m = 48;

	while (n <= 57 && m <= 57)
	{
		while (m <= 57)
		{
			putchar(n);
			putchar(m);
			if (n != 57 || m != 57)
			{
				putchar(',');
				putchar(' ');
			}
			m++;
		}
		n++;
		m = 48;
	}
	putchar('\n');
	return (0);
}
