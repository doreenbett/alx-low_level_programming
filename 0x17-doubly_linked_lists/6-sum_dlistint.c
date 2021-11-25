#include "lists.h"
/**
* sum_dlistint - sums all data of a dlistint-t list
* @head: Head of te dlistint_t list
*
* Return: The sum o all the data
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
