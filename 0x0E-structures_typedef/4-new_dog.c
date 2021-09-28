#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
/**
*new_dog - creates a new
*@name: character pointer
*@owner: character pointer
*@age: float
*Return: 0
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *lovely_dog;
	int name_len = 0, owner_len = 0;

	if (name != NULL && owner != NULL)
	{
		name_len = _strlen(name) + 1;
		owner_len = _strlen(owner) + 1;
		lovely_dog = malloc(sizeof(dog_t));

		if (lovely_dog == NULL)
			return (NULL);

		lovely_dog->name = malloc(sizeof(char) * name_len);

		if (lovely_dog->name == NULL)
		{
			free(lovely_dog);
			return (NULL);
		}

		lovely_dog->owner = malloc(sizeof(char) * owner_len);

		if (lovely_dog->owner == NULL)
		{
			free(lovely_dog->name);
			free(lovely_dog);
			return (NULL);
		}

		lovely_dog->name = _strcpy(lovely_dog->name, name);
		lovely_dog->owner = _strcpy(lovely_dog->owner, owner);
		lovely_dog->age;
	}
	return (lovely_dog);
}
/**
* _strlen - returns the length of a string
* @s: is the pointer to the length of string
* Return: length of @s
*/
int _strlen(char *s)
{
	int length = 0;

	while
	(*s++)

	length++;

	return (length);
}
/**
* char *_strcpy - copies the string
* @src: source
* @dest: destiny
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];

	return (dest);
}
