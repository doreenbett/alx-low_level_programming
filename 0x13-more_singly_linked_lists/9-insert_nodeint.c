#include "lists.h"
/**
*insert_nodeint_at_index - inserts a new node at a given position
*@head: points to a node
*@idx: index position to be inserted a new node
*@n: integer value
*Return: address of newnode
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *ptr = *head;
	unsigned int node;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = ptr;
		*head = newnode;
		return (newnode);
	}
	for (node = 0; node < (idx - 1); node++)
	{
		if (ptr == NULL || ptr->next == NULL)
			return (NULL);
		ptr = ptr->next;
	}
	newnode->next = ptr->next;
	ptr->next = newnode;

	return (newnode);
}
