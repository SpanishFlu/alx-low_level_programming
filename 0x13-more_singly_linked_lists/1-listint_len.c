#include "lists.h"

/**
 * listint_len - returns the number of elements in a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t elements_number = 0;

	for (; h != NULL; elements_number++)
		h = h->next;
	return (elements_number);
}

