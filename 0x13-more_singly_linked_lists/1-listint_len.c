#include "lists.h"
/**
*listint_len - returns number of elements in a list
*@h: pointer to the first listint_t list
*
*Return: The number of elements in the listint_t list
*/
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
