#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the newly allocated concatenated string,
 *         or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	unsigned int l1, l2, i, j;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (l1 = 0; s1[l1] != 0; l1++)
		;
	for (l2 = 0; s2[l2] != 0; l2++)
		;
	c = malloc((l1 + l2 + 1) * sizeof(char));
	if (c == 0)
		return (0);
	for (i = 0; i <= l1; i++)
		c[i] = s1[i];
	for (j = 0; j <= l2; j++)
		c[i + j] = s2[j];
	c[i + j] = '\0';
	return (0);
}
