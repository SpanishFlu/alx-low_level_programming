#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search in.
 * @accept: The string containing characters to match.
 *
 * Return: The number of bytes in the initial segment of s consisting
 * only of bytes that appear in accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;

	while (*s)
	{
		found = 0;
		while (*accept)
		{
			if (*s == *accept)
			{
				count++;
				found = 1;
				break;
			}
			accept++;
		}

		if (found == 0)
			break;

		s++;
		accept = accept - count;
	}

	return (count);
}

