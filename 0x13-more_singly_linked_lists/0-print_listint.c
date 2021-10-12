#include "lists.h"
/**
*print_listint - prints all elements of a list
*@h: pointer to the first node
*Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
