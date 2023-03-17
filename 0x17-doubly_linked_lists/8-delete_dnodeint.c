#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a
 * dlistint_t linked list.
 * @head: double pointer to the head of the list
 * @index: index of the node to be deleted (starting from 0)
 *
 * Return: 1 if successful, -1 otherwise.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	/* Handle invalid inputs */
	if (head == NULL || *head == NULL)
		return (-1);

	/* Handle index 0 (i.e., deleting the head node) */
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	/* Traverse the list until we reach the desired index */
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	/* If the desired index is not found, return -1 */
	if (current == NULL)
		return (-1);

	/* Update the next node's prev pointer */
	/* and the previous node's next pointer */
	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;

	/* Free the memory of the current node */
	free(current);

	return (1);
}
