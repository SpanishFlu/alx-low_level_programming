#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to the head of the list
 *
 * Return: the head node's data (n), or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);
	tmp = *head;
	data = tmp->n;
	*head = (*head)->next;
	free(tmp);
	tmp = NULL;
	return (data);
}
