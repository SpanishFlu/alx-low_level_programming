#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search within.
 * @accept: The string containing characters to match.
 *
 * Return: The number of bytes in the initial segment of s that consist
 *         only of bytes from the accept string.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;
	int match;

	for (i = 0; s[i]; i++)
	{
		match = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				match = 1;
				break;
			}
		}
		if (match)
		{
			count++;
		}
		else
		{
			break;
		}
	}
	return (count);
}

