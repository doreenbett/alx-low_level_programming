#include "lists.h"
#include <string.h>
/**
*add_node_end - adds a new node at the end of a list_t list
*@head: a pointer the head of list
*@str: the string to be added to te list
*Return: if the function fails - NULL else address of new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	char *ptr;
	int len;

	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	ptr = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	new->str = ptr;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
