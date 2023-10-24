#include "main.h"

/**
 * _strncpy - copies a string.
 *
 * @dest: input parameter
 * @src: input parameter
 * @n: input parameter
 *
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	for (i = n; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (i = n; i < n && dest[i] != '\0'; i++)
		dest[i] = '\0';
	return (dest);
}
