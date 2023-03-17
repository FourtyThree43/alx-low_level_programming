#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: value to be assigned to the new node
 *
 * Return: address of the new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; i < idx - 1 && temp != NULL; i++)
		temp = temp->next;

	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = temp->next;
	new_node->prev = temp;
	if (temp->next != NULL)
		temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}
