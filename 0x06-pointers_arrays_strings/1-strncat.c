#include "main.h"

/**
 * _strncat - concatenates two strings.
 *
 * @dest: input parameter
 * @src: input parameter
 * @n:input parameter
 *
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *tmp = dest;

	while (*tmp != '\0')
		tmp++;
	while (*src != '\0' && n > 0)
	{
		*tmp = *src;
		tmp++;
		src++;
		n--;
	}
	*tmp = '\0';
	return (dest);
}
