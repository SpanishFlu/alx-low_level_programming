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
	int l = 0;
	int i = 0;
	char temp;

	while (s[l] != '\0')
	{
		l++;
	}

	l--;
	while (i < l)
	{
		temp = s[i];
		s[l] = s[i];
		s[l] = temp;

		i++;
		l--;
	}
}
