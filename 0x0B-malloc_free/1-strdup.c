#include <stdlib.h>
/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 *           with the copied string
 * @str: String
 *Return: Pointer of the copied string
 */
char *_strdup(char *str)
{
	int i, len;
	char *dest;

	if (str == 0)
	{
		return (NULL);
	}
	for (len = 0; str[len] != '\0'; len++)
	{
	}
	dest = (char *)malloc(len * sizeof(char));

	if (dest == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		dest[i] = str[i];
	}
	return (dest);
}
