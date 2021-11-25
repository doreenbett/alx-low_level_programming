#include "lists.h"
/**
* add_dnodeint - adds a new node at the bginnin of a dlistint_t list
* @head:A pointer to the head of the dlistint_t list
* @n: Integer for the new node to contain
*
* Return: if the function fails - NULL else address of the new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
