#include "main.h"

/**
 * create_array - Creates an array of chars and initialize.
 * @size: The size of the array.
 * @c: The character to initialize the array with.
 *
 * Return: A pointer to the created array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *n;
	unsigned int i;

	n = malloc(size * sizeof(char));
	if (size == 0)
		return (NULL);
	if (n == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		n[i] = c;
	return (n);
}
