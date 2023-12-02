#include "main.h"
#include <stddef.h>
/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: function pointer that specifies the format
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
