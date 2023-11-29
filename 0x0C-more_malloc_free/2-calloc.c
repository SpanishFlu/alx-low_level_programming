#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - Allocates memory for an array using malloc.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: A pointer to the allocated memory.
 *         If nmemb or size is 0, or if malloc fails, it returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int Ts;

	if (nmemb == 0 || size == 0)
		return (NULL);
	Ts = nmemb * size;
	if (Ts / size != nmemb)
		return (NULL);
	ptr = malloc(Ts);
	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, Ts);
	return (ptr);
}
