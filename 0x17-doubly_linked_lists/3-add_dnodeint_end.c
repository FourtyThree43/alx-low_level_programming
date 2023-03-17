#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: double pointer to the head of the list
 * @n: value to store in the new node
 *
 * Return: the address of the new element,
 *         or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;

	if (!*head) /* empty list*/
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	/* find the lat node */
	current = *head;
	while (current->next)
		current = current->next;

	current->next = new_node;
	new_node->prev = current;

	return (new_node);
}
