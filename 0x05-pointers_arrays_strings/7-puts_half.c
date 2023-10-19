#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 *
 * @str: input parameter.
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int l = 0;

	while (str[l] != '\0')
		l++;
	l++;
	for (l /= 2; str[l] != '\0'; l++)
	{
		putchar(str[l]);
	}
	putchar('\n');
}
