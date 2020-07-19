#include "variadic_functions.h"

/**
 * print_all - Prints any constant
 * @format: Types of arguments passed to function
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *string, *sep = "";

	va_list argum;

	va_start(argum, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", sep, va_arg(argum, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(argum, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(argum, double));
			case 's':
				string = va_arg(argum, char *);
				if (string == NULL)
					printf("(nil)");
				printf("%s%s", sep, string);
				break;
			default:
				i++;
				continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(argum);
}
