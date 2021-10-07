#include "lists.h"
#include <string.h>
/**
*add_node - adds a new node at the beginning
*@head: a pointer to the head of the list_t list
*@str: the string to be added to the list_t list
*Return: if te function fails - NULL else address of new element
*/
list_t *add_node(list_t **head, const char *str)
{
	char *ptr;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	ptr = strdup(str);
	if (ptr == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = ptr;
	new->len = len;
	new->next = *head;

	*head = new;
	return (new);
}
