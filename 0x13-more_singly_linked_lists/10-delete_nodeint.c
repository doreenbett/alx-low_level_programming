#include "lists.h"
/**
*delete_nodeint_at_index - deletes the node at index of linked list
*@head: pointer to a pointer pointing to a node
*@index: the node that should be deleted
*Return: 1 on Success and -1 on fail
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int node;
	listint_t *previous, *current = *head;

	if (current == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	for (node = 0; node < (index - 1); node++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	previous = current->next;
	current->next = previous->next;
	free(previous);
	return (1);
}
