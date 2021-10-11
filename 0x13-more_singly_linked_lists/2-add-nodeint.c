#include "lists.h"
/**
*add_nodeint - adds a new node at the beginning of a linkedlist
*@head: pointer to the address of head of listint_t list
*@n: integer for new node to contain
*
*Return: NULL if it fails else an address of new element
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
