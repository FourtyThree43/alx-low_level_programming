#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head of the linked list
 * @index: index of the node, starting from 0
 *
 * Return: the nth node of the list, or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current;

	current = head;
	for (i = 0; current != NULL && i < index; i++)
		current = current->next;

	return (current == NULL ? NULL : current);
}
