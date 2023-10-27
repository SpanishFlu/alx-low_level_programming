#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to search within.
 * @accept: The string containing bytes to search for.
 *
 * Return: A pointer to the first occurrence in s of any byte in accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
		int i, j;

		for (i = 0; s[i]; i++)
		{
				for (j = 0; accept[j]; j++)
				{
						if (s[i] == accept[j])
						{
								return (s + i);
						}
				}
		}

		return (NULL);
}

