#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
/**
*_strlen - returns the length of a string
*@s: is the pointer to the length of string
*Return: length of @s
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
/**
*new_dog - creates a new dog
*@name: character pointer
*@owner: character pointer
*@age: float
*Return: pointer
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *love_dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	love_dog = malloc(sizeof(dog_t));
	if (love_dog == NULL)
		return (NULL);

	love_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (love_dog == NULL)
	{
		free(love_dog);
		return (NULL);
	}
	love_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (love_dog->owner == NULL)
	{
		free(love_dog->name);
		free(love_dog);
		return (NULL);
	}
	love_dog->name = _strcpy(love_dog->name, name);
	love_dog->age;
	love->owner = _strcpy(love_dog->owner, owner);

	return (love_dog);
}
	return (love_dog);
}
