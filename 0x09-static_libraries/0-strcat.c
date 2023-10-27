#include "main.h"
/**
 * _strcat - concatenates two strings.
 *
 * @dest: input parameter
 * @src: input parameter
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	while (*tmp != '\0')
		tmp++;
	while (*src != '\0')
	{
		*tmp = *src;
		tmp++;
		src++;
	}
	*tmp = '\0';
	return (dest);
}
