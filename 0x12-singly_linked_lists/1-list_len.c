#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes.
 */
size_t list_len(const list_t *h)
{
	size_t non = 0;

	while (h)
	{
		h = h->next;
		non++;
	}
	return (non);
}
