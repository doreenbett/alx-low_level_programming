#include "lists.h"
/**
*check_loops - finds if the loops exist in the linked list
*@head: pointer to a first node
*
*Return: 0
*/
size_t check_loops(const listint_t *head)
{
	const listint_t *fast, *slow;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow = head->next;
	fast = (head->next)->next;

	while (fast != NULL)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				nodes++;
				slow = slow->next;
				fast = fast->next;
			}
			slow = slow->next;
			while (slow != fast)
			{
				nodes++;
				slow = slow->next;
			}
			return (nodes);
		}
		slow = slow->next;
		fast = (fast->next)->next;
	}
	return (0);
}
/**
*print_listint_safe - prints a listint_t linked list
*@head: pointer to the first node of a linked list
*
*Return: number of nodes
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = check_loops(head);
	if (nodes == 0)
	{
		for (nodes = 0; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes ; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
