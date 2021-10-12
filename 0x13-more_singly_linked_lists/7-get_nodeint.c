#include "lists.h"
/**
*get_nodeint_at_index - returns the nth node of a linked list
*@head: pointer to a node
*@index: positon of each node stating from 0
*
*Return: nth node of list
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
