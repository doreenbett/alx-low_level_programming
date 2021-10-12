#include "lists.h"
/**
*add_nodeint - adds a new node at the beginning
*@head: pointer to aponter that points to the first node of list
*@n: integer value of a node
*
*Return: NULL if it fails otherwise an address of new element
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;

	*head = newnode;

	return (newnode);
}
