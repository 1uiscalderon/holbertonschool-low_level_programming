#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: Name
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != '\0' || f != '\0')
		f(name);
}
