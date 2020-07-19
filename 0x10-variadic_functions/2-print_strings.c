#include "variadic_functions.h"

/**
 * print_strings - Print numbers given with the separator
 * @separator: string to be printed between numbers
 * @n: Number of strings passed to function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list slist;

	va_start(slist, n);

		for (i = 0; i < n; i++)
		{
			string = va_arg(slist, char *);
			if (separator == NULL)
				printf("%s", string);
			else if (string == NULL)
				printf("(nil)");
			else if (separator != NULL && i == 0)
				printf("%s", string);
			else
				printf("%s%s", separator, string);
		}

	va_end(slist);
	printf("\n");
}
