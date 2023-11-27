#include "main.h"

/**
 * _strdup - Duplicates a string using malloc.
 * @str: The input string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL if insufficient memory.
 **/
char *_strdup(char *str)
{
	char *d;
	unsigned int l, i;

	if (str == 0)
		return (0);
	for (l = 0; str[l] != 0; l++)
		;
	d = malloc((l + 1) * sizeof(char));
	if (d == 0)
		return (0);
	for (i = 0; i <= l; i++)
		d[i] = str[i];
	return (d);
}
