#include "main.h"

/**
 * rev_string - function that reverses a string.
 *
 * @s: input parameter.
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int l;

	for (l = 0; *s != '\0'; s++)
	{
	l++;
	}
	while (l--)
	{
	_putchar(s[l]);
	}
}
