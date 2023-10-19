#include "main.h"

/**
 * _puts - unction that prints a string, followed by a new line, to stdout.
 *
 * @str: input parameter
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
