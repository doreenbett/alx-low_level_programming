#include "lists.h"
/**
*reverse_listint - reverses a linked list
*@head: pointer to a pointer pointing to the first node
*
*Return: pointer to the first node of reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *front;

	while (*head != NULL)
	{
		front = (*head)->next;
		*head = prev;
		prev = *head;
		*head = front;
	}
	*head = prev;
	return (*head);
}
