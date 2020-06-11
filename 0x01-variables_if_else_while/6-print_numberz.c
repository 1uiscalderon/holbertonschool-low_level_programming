#include <stdio.h>

/**
 * main - prints the numbers from 0 to 9 using putchar
 * Return: 0 if success
 */
int main(void)
{
	char n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
