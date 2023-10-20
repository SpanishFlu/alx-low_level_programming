#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 *
 * @dest: input parameter.
 * @src: input parameter.
 *
 * Return: dest.
 */

char *_strcpy(char *dest, char *src)
{
	char pdest;

	for (; (*dest = *src) != '\0'; src++; dest;)
		;
	*dest = '\0';
	return (pdest);
}
