#include "function_pointers.h"

/**
 * print_name - print the name using a function pointer
 *
 * @name: pointer to a string
 * @f: pointer to a function that print name
 *
 * no return void
 */

void print_name(char *name, void (*f)(char *))
{
	if(*name == '\0')
		*name = ""
	f(name);
}
