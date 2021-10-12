#include "lists.h"
/**
*free_listint2 - frees a list
*@head: pointer to a pointer pointing to the first node
*
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		if (temp->next == NULL)
			*head = temp->next;
	}
	head = NULL;
}
