#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 *
 * @s: input string.
 *
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		putchar(0);
	}
	putchar(s[i]);
	i++;
}
