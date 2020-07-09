#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of integers
 * @nmemb: width of matrix
 * @size: height of matrix
 *Return: Pointer of the allocated memory
 */
int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(int));

	if (p == NULL)
		return (p);

			for (i = 0; min <= max; i++, min++)
				p[i] = min;

	return(p);
}
