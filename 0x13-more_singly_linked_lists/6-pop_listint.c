#include "lists.h"
/**
*pop_listint - deletes the headnode of a linked list
*@head: pointer to a pointer to a head node
*
*Return: the head node data
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int ret;

	if (*head == NULL)
		return (0);


	temp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(temp);
	return (ret);
}
