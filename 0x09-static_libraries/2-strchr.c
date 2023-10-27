#include "main.h"

/**
 * _strchr - string pointed to.
 *
 * @s: string pointed to
 * @c: the first occurrence of the character.
 *
 * Return: nothing
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
