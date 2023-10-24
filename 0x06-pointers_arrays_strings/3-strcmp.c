#include "main.h"

/**
 * _strcmp - compares two strings.
 *
 * @s1: input parameter
 * @s2: input parameter
 *
 * Return: n.
 */

int _strcmp(char *s1, char *s2)
{
	int n;

	while (*s1 != '\0' || *s2 != '\0')
	{
	if (*s1 < *s2)
		n = -1;
	else if (*s1 > *s2)
		n = 1;
	else
		n = 0;
	}
	return (n);
}
