#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes to concatenate from s2.
 *
 * Return: A pointer to the concatenated string.
 *         If the function fails, it should return NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1 = 0, l2 = 0, i, j;
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;
	if (n >= l2)
		n = l2;
	c = malloc((l1 + n + 1) * sizeof(char));
	if (c == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		c[i] = s1[i];
	for (j = 0; j < n; j++)
		c[i + j] = s2[j];
	c[i + j] = '\0';
	return (c);
}
